
@interface QLAppearance : NSObject <NSSecureCoding> {
    double  _bottomInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _peripheryInsets;
    unsigned long long  _presentationMode;
    double  _topInset;
}

@property (readonly) double bottomInset;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (readonly) unsigned long long presentationMode;
@property (readonly) double topInset;

+ (bool)supportsSecureCoding;

- (double)bottomInset;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopInset:(double)arg1 bottomInset:(double)arg2 presentationMode:(unsigned long long)arg3 peripheryInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (unsigned long long)presentationMode;
- (double)topInset;

@end
