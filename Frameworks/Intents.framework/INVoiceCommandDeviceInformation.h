
@interface INVoiceCommandDeviceInformation : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _deviceIdiom;
    NSNumber * _isHomePodInUltimateMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceIdiom;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *isHomePodInUltimateMode;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)deviceIdiom;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIdiom:(long long)arg1 isHomePodInUltimateMode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)isHomePodInUltimateMode;

@end
