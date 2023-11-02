
@interface DYCAMetalLayerInfo : NSObject <DYCapturableObject, NSSecureCoding> {
    unsigned long long  _deviceAddress;
    NSString * _displayName;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    unsigned long long  _layerAddress;
    unsigned long long  _layerStreamRef;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *capturableObjectType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceAddress;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long layerAddress;
@property (nonatomic, readonly) unsigned long long layerStreamRef;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long streamRef;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capturableObjectType;
- (unsigned long long)deviceAddress;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layerAddress;
- (unsigned long long)layerStreamRef;
- (id)name;
- (unsigned long long)streamRef;

@end
