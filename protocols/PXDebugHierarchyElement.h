
@protocol PXDebugHierarchyElement

@required

- (double)alpha;
- (struct CGColor { }*)backgroundColor;
- (bool)canHaveChildren;
- (NSString *)contentsGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)identifier;
- (NSString *)name;
- (unsigned long long)parentIdentifier;
- (struct CGImage { }*)previewImage;
- (double)zPosition;

@end
