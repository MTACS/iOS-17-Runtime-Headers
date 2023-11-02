
@interface ATXHomeScreenEventMetadata : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSArray * _bundleIds;
    NSURL * _engagedUrl;
    NSNumber * _isStalenessRotation;
    NSNumber * _isSuggestionInAddWidgetSheet;
    NSNumber * _isWidgetInTodayView;
    NSNumber * _pageIndex;
    NSMutableArray * _stackIds;
    long long  _suggestedPageType;
    ATXCGRectWrapper * _visibleRect;
    NSMutableArray * _widgets;
    NSArray * _widgetsInStack;
}

@property (nonatomic, retain) NSArray *bundleIds;
@property (nonatomic, retain) NSURL *engagedUrl;
@property (nonatomic, retain) NSNumber *isStalenessRotation;
@property (nonatomic, retain) NSNumber *isSuggestionInAddWidgetSheet;
@property (nonatomic, retain) NSNumber *isWidgetInTodayView;
@property (nonatomic, retain) NSNumber *pageIndex;
@property (nonatomic, retain) NSDictionary *stacks;
@property (nonatomic) long long suggestedPageType;
@property (nonatomic, retain) ATXCGRectWrapper *visibleRect;
@property (nonatomic, retain) NSArray *widgetsInStack;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIds;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)dictionaryRepresentation;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedUrl;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPageIndex:(id)arg1 suggestedPageType:(long long)arg2 stacks:(id)arg3 widgetsInStack:(id)arg4 isSuggestionInAddWidgetSheet:(id)arg5 isWidgetInTodayView:(id)arg6 visibleRect:(id)arg7 engagedUrl:(id)arg8;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenEventMetadata:(id)arg1;
- (id)isStalenessRotation;
- (id)isSuggestionInAddWidgetSheet;
- (id)isWidgetInTodayView;
- (id)pageIndex;
- (id)proto;
- (void)setBundleIds:(id)arg1;
- (void)setEngagedUrl:(id)arg1;
- (void)setIsStalenessRotation:(id)arg1;
- (void)setIsSuggestionInAddWidgetSheet:(id)arg1;
- (void)setIsWidgetInTodayView:(id)arg1;
- (void)setPageIndex:(id)arg1;
- (void)setStacks:(id)arg1;
- (void)setSuggestedPageType:(long long)arg1;
- (void)setVisibleRect:(id)arg1;
- (void)setWidgetsInStack:(id)arg1;
- (id)stacks;
- (long long)suggestedPageType;
- (id)visibleRect;
- (id)widgetsInStack;

@end
