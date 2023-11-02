
@interface ATXHomeScreenStackConfig : NSObject <NSSecureCoding> {
    bool  _allowsNewWidget;
    bool  _allowsSmartRotate;
    long long  _coordinateColumn;
    long long  _coordinateRow;
    NSString * _identifier;
    ATXHomeScreenPage * _page;
    unsigned long long  _stackLayoutSize;
    NSArray * _widgets;
}

@property (nonatomic) bool allowsNewWidget;
@property (nonatomic) bool allowsSmartRotate;
@property (nonatomic) long long coordinateColumn;
@property (nonatomic) long long coordinateRow;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long numberOfLeafIconSpots;
@property (nonatomic) ATXHomeScreenPage *page;
@property (nonatomic) unsigned long long stackLayoutSize;
@property (nonatomic, copy) NSArray *widgets;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateWidgetBackpointers;
- (bool)allowsNewWidget;
- (bool)allowsSmartRotate;
- (void)assignWidgetSpaceCoordinateWithRow:(long long)arg1 column:(long long)arg2;
- (id)compactDescription;
- (long long)coordinateColumn;
- (long long)coordinateRow;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAppPredictionPanel;
- (bool)isEqual:(id)arg1;
- (bool)isPinnedSuggestionsWidget;
- (bool)isPinnedWidget;
- (unsigned long long)numberOfLeafIconSpots;
- (id)page;
- (void)setAllowsNewWidget:(bool)arg1;
- (void)setAllowsSmartRotate:(bool)arg1;
- (void)setCoordinateColumn:(long long)arg1;
- (void)setCoordinateRow:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setStackLayoutSize:(unsigned long long)arg1;
- (void)setWidgets:(id)arg1;
- (unsigned long long)stackLayoutSize;
- (id)widgets;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (bool)sb_isAppPredictionStack;

@end
