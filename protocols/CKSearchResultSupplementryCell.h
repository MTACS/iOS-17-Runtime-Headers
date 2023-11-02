
@protocol CKSearchResultSupplementryCell <NSObject>

@required

+ (double)desiredZPosition;
+ (NSString *)reuseIdentifier;
+ (NSString *)supplementaryViewType;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
