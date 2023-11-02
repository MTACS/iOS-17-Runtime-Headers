
@interface MADVIMachineReadableCodeDetectionResultItem : NSObject <NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
    CIBarcodeDescriptor * _descriptor;
    NSString * _payload;
    NSString * _symbology;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic, readonly) CIBarcodeDescriptor *descriptor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedBoundingBox;
@property (nonatomic, readonly) NSString *payload;
@property (nonatomic, readonly) NSString *symbology;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topRight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopLeft:(struct CGPoint { double x1; double x2; })arg1 topRight:(struct CGPoint { double x1; double x2; })arg2 bottomLeft:(struct CGPoint { double x1; double x2; })arg3 bottomRight:(struct CGPoint { double x1; double x2; })arg4 symbology:(id)arg5 payload:(id)arg6 andDescriptor:(id)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBoundingBox;
- (id)payload;
- (id)symbology;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;

@end
