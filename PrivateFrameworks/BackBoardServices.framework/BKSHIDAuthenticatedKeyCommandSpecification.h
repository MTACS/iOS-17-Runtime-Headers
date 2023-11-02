
@interface BKSHIDAuthenticatedKeyCommandSpecification : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSSecureCoding> {
    unsigned long long  _context;
    BKSHIDEventKeyCommand * _keyCommand;
}

@property (nonatomic) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BKSHIDEventKeyCommand *keyCommand;
@property (readonly) Class superclass;

+ (id)protobufSchema;
+ (id)specificationWithKeyCommand:(id)arg1 context:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)context;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyCommand;
- (void)setContext:(unsigned long long)arg1;
- (void)setKeyCommand:(id)arg1;

@end
