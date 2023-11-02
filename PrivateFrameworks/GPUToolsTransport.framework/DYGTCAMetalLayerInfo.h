
@interface DYGTCAMetalLayerInfo : NSObject <NSSecureCoding> {
    unsigned long long  _deviceAddress;
    unsigned long long  _deviceStreamRef;
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

@property (nonatomic) unsigned long long deviceAddress;
@property (nonatomic) unsigned long long deviceStreamRef;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) unsigned long long layerAddress;
@property (nonatomic) unsigned long long layerStreamRef;
@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)deviceAddress;
- (unsigned long long)deviceStreamRef;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)layerAddress;
- (unsigned long long)layerStreamRef;
- (id)name;
- (void)setDeviceAddress:(unsigned long long)arg1;
- (void)setDeviceStreamRef:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayerAddress:(unsigned long long)arg1;
- (void)setLayerStreamRef:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
