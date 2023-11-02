
@interface WFMachineReadableCode : NSObject <NSSecureCoding, WFNaming, WFSerializableContent> {
    NSString * _errorCorrectionLevel;
    NSString * _stringValue;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *errorCorrectionLevel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCorrectionLevel;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachineReadableCodeObject:(id)arg1;
- (id)initWithType:(id)arg1 stringValue:(id)arg2 errorCorrectionLevel:(id)arg3;
- (id)stringValue;
- (id)type;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
