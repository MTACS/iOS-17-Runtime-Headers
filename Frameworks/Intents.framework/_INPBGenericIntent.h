
@interface _INPBGenericIntent : PBCodable <NSCopying, NSSecureCoding, _INPBGenericIntent> {
    NSString * _domain;
    struct { }  _has;
    _INPBIntentMetadata * _metadata;
    NSArray * _parameters;
    NSString * _verb;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasVerb;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *metadata;
@property (nonatomic, copy) NSArray *parameters;
@property (nonatomic, readonly) unsigned long long parametersCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *verb;

+ (Class)parametersType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addParameters:(id)arg1;
- (void)clearParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDomain;
- (bool)hasMetadata;
- (bool)hasVerb;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)parameters;
- (id)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)writeTo:(id)arg1;

@end
