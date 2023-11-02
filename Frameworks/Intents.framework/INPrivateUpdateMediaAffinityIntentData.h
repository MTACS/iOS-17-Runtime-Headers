
@interface INPrivateUpdateMediaAffinityIntentData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSArray * _internalSignals;
    INPrivateMediaIntentData * _privateMediaIntentData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *internalSignals;
@property (nonatomic, copy) INPrivateMediaIntentData *privateMediaIntentData;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrivateMediaIntentData:(id)arg1;
- (id)initWithPrivateMediaIntentData:(id)arg1 internalSignals:(id)arg2;
- (id)internalSignals;
- (bool)isEqual:(id)arg1;
- (id)privateMediaIntentData;
- (void)setPrivateMediaIntentData:(id)arg1;

@end
