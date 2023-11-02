
@interface _INPBDeleteHealthSampleIntent : PBCodable <NSCopying, NSSecureCoding, _INPBDeleteHealthSampleIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _sampleUuids;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSArray *sampleUuids;
@property (nonatomic, readonly) unsigned long long sampleUuidsCount;
@property (readonly) Class superclass;

+ (Class)sampleUuidsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSampleUuids:(id)arg1;
- (void)clearSampleUuids;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sampleUuids;
- (id)sampleUuidsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sampleUuidsCount;
- (void)setIntentMetadata:(id)arg1;
- (void)setSampleUuids:(id)arg1;
- (void)writeTo:(id)arg1;

@end
