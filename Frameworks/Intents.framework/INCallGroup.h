
@interface INCallGroup : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _groupId;
    NSString * _groupName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupId;
@property (nonatomic, readonly, copy) NSString *groupName;
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
- (id)groupId;
- (id)groupName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupName:(id)arg1 groupId:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
