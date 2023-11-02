
@protocol _UICollectionViewAnimationContext <_UICollectionViewUpdateTranslating>

@required

- (NSArray *)appearingAttributes;
- (NSArray *)disappearingAttributes;
- (UICollectionViewLayout *)layout;
- (void)setAppearingAttributes:(NSArray *)arg1;
- (void)setDisappearingAttributes:(NSArray *)arg1;
- (NSArray *)updates;

@end
