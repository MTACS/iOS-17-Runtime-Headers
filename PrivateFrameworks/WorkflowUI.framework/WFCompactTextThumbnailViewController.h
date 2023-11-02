
@interface WFCompactTextThumbnailViewController : WFCompactThumbnailViewController {
    UILabel * _label;
    NSString * _string;
}

@property (nonatomic) UILabel *label;
@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1;
- (id)initWithString:(id)arg1;
- (id)label;
- (void)loadView;
- (unsigned long long)preferredContentMode;
- (void)setLabel:(id)arg1;
- (id)string;
- (void)traitCollectionDidChange:(id)arg1;

@end
