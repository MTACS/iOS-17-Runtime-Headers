
@protocol _INPBMediaItemValue <NSObject>

@required

+ (Class)namedEntitiesType;
+ (Class)topicsType;

- (int)StringAsType:(NSString *)arg1;
- (void)addNamedEntities:(_INPBScoredValue *)arg1;
- (void)addTopics:(_INPBScoredValue *)arg1;
- (NSString *)artist;
- (_INPBImageValue *)artwork;
- (NSString *)assetInfo;
- (void)clearNamedEntities;
- (void)clearTopics;
- (bool)hasArtist;
- (bool)hasArtwork;
- (bool)hasAssetInfo;
- (bool)hasIdentifier;
- (bool)hasPrivateMediaItemValueData;
- (bool)hasTitle;
- (bool)hasType;
- (bool)hasValueMetadata;
- (NSString *)identifier;
- (NSArray *)namedEntities;
- (_INPBScoredValue *)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (_INPBPrivateMediaItemValueData *)privateMediaItemValueData;
- (void)setArtist:(NSString *)arg1;
- (void)setArtwork:(_INPBImageValue *)arg1;
- (void)setAssetInfo:(NSString *)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setNamedEntities:(NSArray *)arg1;
- (void)setPrivateMediaItemValueData:(_INPBPrivateMediaItemValueData *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTopics:(NSArray *)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (NSString *)title;
- (NSArray *)topics;
- (_INPBScoredValue *)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
