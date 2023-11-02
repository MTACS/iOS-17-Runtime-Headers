
@interface SearchUIActionLabelAccessoryViewController : SearchUIAccessoryViewController

@property (nonatomic, retain) TLKStoreButton *view;

+ (bool)supportsRowModel:(id)arg1;

- (id)setupView;
- (void)updateWithRowModel:(id)arg1;

@end
