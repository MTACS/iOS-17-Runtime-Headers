
@interface INSpeakerIDInfo : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _sharedUserID;
    long long  _speakerIDConfidence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *sharedUserID;
@property (nonatomic, readonly) long long speakerIDConfidence;
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
- (id)initWithSharedUserID:(id)arg1 speakerIDConfidence:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)sharedUserID;
- (long long)speakerIDConfidence;

@end
