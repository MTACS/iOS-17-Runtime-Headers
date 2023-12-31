
@interface TSDErrorImageProvider : TSDImageProvider

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isError;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGPDFDocument { }*)p_iconPDFDocument;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
