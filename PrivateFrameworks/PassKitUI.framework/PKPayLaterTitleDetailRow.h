
@interface PKPayLaterTitleDetailRow : NSObject <PKPayLaterCollectionViewRow> {
    NSString * _detail;
    UIColor * _detailColor;
    UIFont * _detailFont;
    UIImage * _image;
    UIColor * _imageTintColor;
    id /* block */  _selectionHandler;
    bool  _showSpinner;
    NSString * _title;
    UIColor * _titleColor;
    UIFont * _titleFont;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detail;
@property (nonatomic, retain) UIColor *detailColor;
@property (nonatomic, retain) UIFont *detailFont;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *imageTintColor;
@property (nonatomic) bool showSpinner;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIFont *titleFont;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)detail;
- (id)detailColor;
- (id)detailFont;
- (void)handleCellSelection;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)imageTintColor;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 selectionHandler:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setDetailColor:(id)arg1;
- (void)setDetailFont:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (bool)shouldHighlightItem;
- (bool)showSpinner;
- (id)title;
- (id)titleColor;
- (id)titleFont;

@end
