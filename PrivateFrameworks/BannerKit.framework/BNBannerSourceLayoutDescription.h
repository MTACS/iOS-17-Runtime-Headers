
@interface BNBannerSourceLayoutDescription : NSObject <BSXPCSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    double  _offsetFromPresentationEdge;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentationSize;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } containerSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double offsetFromPresentationEdge;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (readonly) Class superclass;

+ (id)bannerSourceLayoutDescriptionWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)bannerSourceLayoutDescriptionWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2 offsetFromPresentationEdge:(double)arg3;
+ (bool)supportsBSXPCSecureCoding;

- (id)_initWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2 offsetFromPresentationEdge:(double)arg3;
- (struct CGSize { double x1; double x2; })containerSize;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (double)offsetFromPresentationEdge;
- (struct CGSize { double x1; double x2; })presentationSize;

@end
