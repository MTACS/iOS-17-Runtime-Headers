
@interface WFPBGallerySessionAddShortcutEvent : PBCodable <NSCopying> {
    NSString * _key;
    NSString * _sessionIdentifier;
    NSString * _shortcutIdentifier;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSessionIdentifier;
@property (nonatomic, readonly) bool hasShortcutIdentifier;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic, retain) NSString *shortcutIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasSessionIdentifier;
- (bool)hasShortcutIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionIdentifier;
- (void)setKey:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setShortcutIdentifier:(id)arg1;
- (id)shortcutIdentifier;
- (void)writeTo:(id)arg1;

@end
