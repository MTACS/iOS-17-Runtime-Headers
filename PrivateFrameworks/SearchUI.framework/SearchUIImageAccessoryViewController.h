
@interface SearchUIImageAccessoryViewController : SearchUIAccessoryViewController

@property (retain) SearchUIImageView *view;

+ (bool)resultIsLegacySiriAction:(id)arg1;
+ (bool)supportsRowModel:(id)arg1;

- (bool)containsSymbolImage;
- (id)setupView;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end
