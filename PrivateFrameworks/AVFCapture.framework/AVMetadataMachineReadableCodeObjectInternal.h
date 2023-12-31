
@interface AVMetadataMachineReadableCodeObjectInternal : NSObject {
    NSDictionary * basicDescriptor;
    NSArray * corners;
    bool  decoded;
    CIBarcodeDescriptor * descriptor;
    NSString * stringValue;
}

@property (retain) NSDictionary *basicDescriptor;
@property (retain) NSArray *corners;
@property bool decoded;
@property (retain) CIBarcodeDescriptor *descriptor;
@property (retain) NSString *stringValue;

- (id)basicDescriptor;
- (id)corners;
- (void)dealloc;
- (bool)decoded;
- (id)descriptor;
- (void)setBasicDescriptor:(id)arg1;
- (void)setCorners:(id)arg1;
- (void)setDecoded:(bool)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
