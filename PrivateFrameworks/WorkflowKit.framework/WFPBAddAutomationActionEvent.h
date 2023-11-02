
@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying> {
    NSString * _actionIdentifier;
    unsigned int  _actionIndex;
    struct { 
        unsigned int actionIndex : 1; 
    }  _has;
    NSString * _key;
    NSString * _shortcutIdentifier;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic) unsigned int actionIndex;
@property (nonatomic, readonly) bool hasActionIdentifier;
@property (nonatomic) bool hasActionIndex;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasShortcutIdentifier;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *shortcutIdentifier;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (unsigned int)actionIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionIdentifier;
- (bool)hasActionIndex;
- (bool)hasKey;
- (bool)hasShortcutIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionIdentifier:(id)arg1;
- (void)setActionIndex:(unsigned int)arg1;
- (void)setHasActionIndex:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setShortcutIdentifier:(id)arg1;
- (id)shortcutIdentifier;
- (void)writeTo:(id)arg1;

@end
