
@interface WFPBDeleteShortcutEvent : PBCodable <NSCopying> {
    unsigned int  _actionCount;
    NSString * _addToSiriBundleIdentifier;
    NSString * _galleryIdentifier;
    struct { 
        unsigned int actionCount : 1; 
    }  _has;
    NSString * _key;
    NSString * _shortcutSource;
}

@property (nonatomic) unsigned int actionCount;
@property (nonatomic, retain) NSString *addToSiriBundleIdentifier;
@property (nonatomic, retain) NSString *galleryIdentifier;
@property (nonatomic) bool hasActionCount;
@property (nonatomic, readonly) bool hasAddToSiriBundleIdentifier;
@property (nonatomic, readonly) bool hasGalleryIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasShortcutSource;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *shortcutSource;

- (void).cxx_destruct;
- (unsigned int)actionCount;
- (id)addToSiriBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)galleryIdentifier;
- (bool)hasActionCount;
- (bool)hasAddToSiriBundleIdentifier;
- (bool)hasGalleryIdentifier;
- (bool)hasKey;
- (bool)hasShortcutSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionCount:(unsigned int)arg1;
- (void)setAddToSiriBundleIdentifier:(id)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setHasActionCount:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setShortcutSource:(id)arg1;
- (id)shortcutSource;
- (void)writeTo:(id)arg1;

@end
