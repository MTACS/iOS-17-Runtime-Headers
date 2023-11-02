
@interface INArchivedObject : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSData * _messageData;
    NSString * _typeName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *messageData;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *typeName;

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
- (id)initWithTypeName:(id)arg1 messageData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)messageData;
- (id)typeName;

@end
