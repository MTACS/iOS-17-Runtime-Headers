
@interface WFPBSetupGalleryShortcutEvent : PBCodable <NSCopying> {
    NSString * _addToSiriBundleIdentifier;
    bool  _completed;
    NSString * _galleryCategoryIdentifier;
    NSString * _galleryIdentifier;
    struct { 
        unsigned int completed : 1; 
    }  _has;
    NSString * _key;
}

@property (nonatomic, retain) NSString *addToSiriBundleIdentifier;
@property (nonatomic) bool completed;
@property (nonatomic, retain) NSString *galleryCategoryIdentifier;
@property (nonatomic, retain) NSString *galleryIdentifier;
@property (nonatomic, readonly) bool hasAddToSiriBundleIdentifier;
@property (nonatomic) bool hasCompleted;
@property (nonatomic, readonly) bool hasGalleryCategoryIdentifier;
@property (nonatomic, readonly) bool hasGalleryIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)addToSiriBundleIdentifier;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)galleryCategoryIdentifier;
- (id)galleryIdentifier;
- (bool)hasAddToSiriBundleIdentifier;
- (bool)hasCompleted;
- (bool)hasGalleryCategoryIdentifier;
- (bool)hasGalleryIdentifier;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddToSiriBundleIdentifier:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setGalleryCategoryIdentifier:(id)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
