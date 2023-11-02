
@interface PKPayLaterTitleDetailValueRow : NSObject <PKPayLaterCollectionViewRow> {
    unsigned long long  _accessory;
    NSString * _detail;
    UIColor * _detailColor;
    UIFont * _detailFont;
    UIImage * _detailIcon;
    double  _horizontalMargin;
    double  _labelPadding;
    id /* block */  _selectionHandler;
    NSString * _title;
    UIColor * _titleColor;
    UIFont * _titleFont;
    NSString * _value;
    UIColor * _valueColor;
    UIFont * _valueFont;
    double  _verticalMargin;
}

@property (nonatomic) unsigned long long accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *detailColor;
@property (nonatomic, retain) UIFont *detailFont;
@property (nonatomic, retain) UIImage *detailIcon;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalMargin;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) double labelPadding;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *valueColor;
@property (nonatomic, retain) UIFont *valueFont;
@property (nonatomic) double verticalMargin;

- (void).cxx_destruct;
- (unsigned long long)accessory;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)detailColor;
- (id)detailFont;
- (id)detailIcon;
- (void)handleCellSelection;
- (unsigned long long)hash;
- (double)horizontalMargin;
- (id)identifier;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 value:(id)arg3 accessory:(unsigned long long)arg4 selectionHandler:(id /* block */)arg5;
- (bool)isEqual:(id)arg1;
- (double)labelPadding;
- (void)setAccessory:(unsigned long long)arg1;
- (void)setDetailColor:(id)arg1;
- (void)setDetailFont:(id)arg1;
- (void)setDetailIcon:(id)arg1;
- (void)setHorizontalMargin:(double)arg1;
- (void)setLabelPadding:(double)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setValueColor:(id)arg1;
- (void)setValueFont:(id)arg1;
- (void)setVerticalMargin:(double)arg1;
- (bool)shouldHighlightItem;
- (id)titleColor;
- (id)titleFont;
- (id)valueColor;
- (id)valueFont;
- (double)verticalMargin;

@end
