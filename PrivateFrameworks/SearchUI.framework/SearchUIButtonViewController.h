
@interface SearchUIButtonViewController : SearchUILeadingViewController

@property (nonatomic, retain) SearchUIImageButton *view;

+ (bool)supportsRowModel:(id)arg1;

- (void)buttonPressed;
- (id)setupView;
- (bool)shouldVerticallyCenter;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end
