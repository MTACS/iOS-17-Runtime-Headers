
@interface SearchUIButtonItemAccessoryViewController : SearchUIAccessoryViewController

@property (retain) SearchUIButtonItemStackView *view;

+ (bool)supportsRowModel:(id)arg1;

- (id)setupView;
- (void)updateWithRowModel:(id)arg1;

@end
