
@interface PKPayLaterButtonRow : NSObject <PKPayLaterCollectionViewRow> {
    bool  _disabled;
    UIImage * _image;
    id /* block */  _selectionHandler;
    bool  _showSpinner;
    UIColor * _textColor;
    NSAttributedString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool showSpinner;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (void)handleCellSelection;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)initWithTitle:(id)arg1 selectionHandler:(id /* block */)arg2;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (bool)shouldHighlightItem;
- (bool)showSpinner;
- (id)textColor;

@end
