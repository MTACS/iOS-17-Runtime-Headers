
@interface DocumentUnderstanding.DUDisplayInfo : NSObject <NSCoding, NSCopying> {
    void absoluteOriginOnScreen;
    void frameInWindow;
    void isOnScreen;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } absoluteOriginOnScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInWindow;
@property (nonatomic) bool isOnScreen;

- (struct CGPoint { double x1; double x2; })absoluteOriginOnScreen;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isOnScreen;
- (void)setAbsoluteOriginOnScreen:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsOnScreen:(bool)arg1;

@end
