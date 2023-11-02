
@interface _INPBControlHomeIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBControlHomeIntentResponse> {
    NSArray * _entityResponses;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entityResponses;
@property (nonatomic, readonly) unsigned long long entityResponsesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)entityResponsesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addEntityResponses:(id)arg1;
- (void)clearEntityResponses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityResponses;
- (id)entityResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityResponsesCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityResponses:(id)arg1;
- (void)writeTo:(id)arg1;

@end
