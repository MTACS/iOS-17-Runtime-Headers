
@interface SearchUILeadingEncapsulatedTextViewController : SearchUILeadingViewController

@property (retain) SearchUILabel *view;

+ (bool)supportsRowModel:(id)arg1;

- (id)setupView;
- (bool)shouldCenterAlignToTitle;
- (void)updateWithRowModel:(id)arg1;

@end
