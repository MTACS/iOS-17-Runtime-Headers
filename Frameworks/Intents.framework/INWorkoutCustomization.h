
@interface INWorkoutCustomization : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _environment;
    NSString * _focus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *environment;
@property (nonatomic, readonly, copy) NSString *focus;
@property (readonly) unsigned long long hash;
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
- (id)environment;
- (id)focus;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocus:(id)arg1 environment:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
