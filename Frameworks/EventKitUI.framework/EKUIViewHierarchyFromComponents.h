
@interface EKUIViewHierarchyFromComponents : NSObject <EKUIViewHierarchy, NSSecureCoding> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _ekui_affineTransform;
    double  _ekui_height;
    long long  _ekui_horizontalSizeClass;
    long long  _ekui_interfaceOrientation;
    <EKUIViewHierarchy> * _ekui_rootViewHierarchy;
    struct CGSize { 
        double width; 
        double height; 
    }  _ekui_size;
    UIColor * _ekui_tintColor;
    long long  _ekui_verticalSizeClass;
    double  _ekui_width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } ekui_affineTransform;
@property (nonatomic) double ekui_height;
@property (nonatomic) long long ekui_horizontalSizeClass;
@property (nonatomic) long long ekui_interfaceOrientation;
@property (nonatomic, retain) <EKUIViewHierarchy> *ekui_rootViewHierarchy;
@property (nonatomic) struct CGSize { double x1; double x2; } ekui_size;
@property (nonatomic, retain) UIColor *ekui_tintColor;
@property (nonatomic) long long ekui_verticalSizeClass;
@property (nonatomic) double ekui_width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })ekui_affineTransform;
- (double)ekui_height;
- (long long)ekui_horizontalSizeClass;
- (long long)ekui_interfaceOrientation;
- (id)ekui_rootViewHierarchy;
- (struct CGSize { double x1; double x2; })ekui_size;
- (id)ekui_tintColor;
- (long long)ekui_verticalSizeClass;
- (double)ekui_width;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 verticalSizeClass:(long long)arg2 horizontalSizeClass:(long long)arg3 interfaceOrientation:(long long)arg4 tintColor:(id)arg5 affineTranform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6;
- (void)setEkui_affineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setEkui_height:(double)arg1;
- (void)setEkui_horizontalSizeClass:(long long)arg1;
- (void)setEkui_interfaceOrientation:(long long)arg1;
- (void)setEkui_rootViewHierarchy:(id)arg1;
- (void)setEkui_size:(struct CGSize { double x1; double x2; })arg1;
- (void)setEkui_tintColor:(id)arg1;
- (void)setEkui_verticalSizeClass:(long long)arg1;
- (void)setEkui_width:(double)arg1;

@end
