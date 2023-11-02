
@interface INModifyRelationship : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSNumber * _isRemoval;
    NSString * _targetRelationship;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *isRemoval;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *targetRelationship;

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
- (id)initWithTargetRelationship:(id)arg1 isRemoval:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)isRemoval;
- (id)targetRelationship;

@end
