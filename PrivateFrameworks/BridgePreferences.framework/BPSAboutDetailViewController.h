
@interface BPSAboutDetailViewController : OBTextWelcomeController {
    NSArray * _bullets;
    NSString * _footerString;
    UIImage * _headerGlyph;
    NSString * _headerString;
    id /* block */  _onDismiss;
    NSArray * _paragraphs;
    NSString * _titleString;
}

@property (nonatomic, retain) NSArray *bullets;
@property (nonatomic, retain) NSString *footerString;
@property (nonatomic, retain) UIImage *headerGlyph;
@property (nonatomic, retain) NSString *headerString;
@property (nonatomic, copy) id /* block */ onDismiss;
@property (nonatomic, retain) NSArray *paragraphs;
@property (nonatomic, retain) NSString *titleString;

- (void).cxx_destruct;
- (id)bullets;
- (bool)contentViewIsInAdjustedScrollView;
- (void)donePressed;
- (id)footerString;
- (id)headerGlyph;
- (id)headerString;
- (id)init;
- (id /* block */)onDismiss;
- (id)paragraphs;
- (void)presentWithController:(id)arg1;
- (void)presentWithController:(id)arg1 onDismiss:(id /* block */)arg2;
- (void)setBullets:(id)arg1;
- (void)setFooterString:(id)arg1;
- (void)setHeaderGlyph:(id)arg1;
- (void)setHeaderString:(id)arg1;
- (void)setOnDismiss:(id /* block */)arg1;
- (void)setParagraphs:(id)arg1;
- (void)setTitleString:(id)arg1;
- (id)titleString;
- (void)viewDidLoad;

@end
