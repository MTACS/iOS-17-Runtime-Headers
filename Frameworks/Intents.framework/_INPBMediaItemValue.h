
@interface _INPBMediaItemValue : PBCodable <NSCopying, NSSecureCoding, _INPBMediaItemValue> {
    NSString * _artist;
    _INPBImageValue * _artwork;
    NSString * _assetInfo;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NSArray * _namedEntities;
    _INPBPrivateMediaItemValueData * _privateMediaItemValueData;
    NSString * _title;
    NSArray * _topics;
    int  _type;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) _INPBImageValue *artwork;
@property (nonatomic, copy) NSString *assetInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArtist;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic, readonly) bool hasAssetInfo;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPrivateMediaItemValueData;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *namedEntities;
@property (nonatomic, readonly) unsigned long long namedEntitiesCount;
@property (nonatomic, retain) _INPBPrivateMediaItemValueData *privateMediaItemValueData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *topics;
@property (nonatomic, readonly) unsigned long long topicsCount;
@property (nonatomic) int type;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (Class)namedEntitiesType;
+ (bool)supportsSecureCoding;
+ (Class)topicsType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (void)addTopics:(id)arg1;
- (id)artist;
- (id)artwork;
- (id)assetInfo;
- (void)clearNamedEntities;
- (void)clearTopics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasArtist;
- (bool)hasArtwork;
- (bool)hasAssetInfo;
- (bool)hasIdentifier;
- (bool)hasPrivateMediaItemValueData;
- (bool)hasTitle;
- (bool)hasType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (id)privateMediaItemValueData;
- (bool)readFrom:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setAssetInfo:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setPrivateMediaItemValueData:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopics:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)title;
- (id)topics;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
