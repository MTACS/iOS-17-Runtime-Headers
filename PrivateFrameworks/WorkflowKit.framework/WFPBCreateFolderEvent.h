
@interface WFPBCreateFolderEvent : PBCodable <NSCopying> {
    NSString * _folderSource;
    struct { 
        unsigned int icon : 1; 
        unsigned int shortcutCount : 1; 
    }  _has;
    unsigned int  _icon;
    NSString * _key;
    unsigned int  _shortcutCount;
}

@property (nonatomic, retain) NSString *folderSource;
@property (nonatomic, readonly) bool hasFolderSource;
@property (nonatomic) bool hasIcon;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasShortcutCount;
@property (nonatomic) unsigned int icon;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) unsigned int shortcutCount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)folderSource;
- (bool)hasFolderSource;
- (bool)hasIcon;
- (bool)hasKey;
- (bool)hasShortcutCount;
- (unsigned long long)hash;
- (unsigned int)icon;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFolderSource:(id)arg1;
- (void)setHasIcon:(bool)arg1;
- (void)setHasShortcutCount:(bool)arg1;
- (void)setIcon:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setShortcutCount:(unsigned int)arg1;
- (unsigned int)shortcutCount;
- (void)writeTo:(id)arg1;

@end
