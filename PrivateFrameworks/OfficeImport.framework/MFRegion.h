
@interface MFRegion : NSObject <MFObject>

- (int)fill:(id)arg1 in_brush:(id)arg2;
- (int)frame:(id)arg1 in_brush:(id)arg2;
- (int)invert:(id)arg1;
- (id)pathForClippingWithDeviceContext:(id)arg1;
- (int)selectInto:(id)arg1;

@end
