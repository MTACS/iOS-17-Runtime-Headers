
@interface SearchUIAppClipAccessoryViewController : SearchUIAccessoryViewController

@property (retain) TLKStoreButton *view;

+ (bool)supportsRowModel:(id)arg1;

- (id)setupView;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end
