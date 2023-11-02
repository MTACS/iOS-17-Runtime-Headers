
@interface BKSHIDEventDeferringToken : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSSecureCoding> {
    unsigned int  _CAContextID;
    NSString * _stringIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)protobufSchema;
+ (bool)supportsSecureCoding;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)arg1;
+ (id)tokenForString:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)_identifierOfCAContext;
- (id)_initWithIdentifier:(unsigned int)arg1;
- (id)_initWithString:(id)arg1;
- (bool)_isIdentifierOfCAContext;
- (bool)_isString;
- (id)_string;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)didFinishProtobufDecodingWithError:(out id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
