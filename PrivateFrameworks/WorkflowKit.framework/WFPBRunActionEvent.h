
@interface WFPBRunActionEvent : PBCodable <NSCopying> {
    NSString * _actionIdentifier;
    NSString * _automationType;
    bool  _completed;
    bool  _didRunRemotely;
    NSString * _galleryIdentifier;
    struct { 
        unsigned int completed : 1; 
        unsigned int didRunRemotely : 1; 
        unsigned int isInvalidatedSystemAction : 1; 
    }  _has;
    bool  _isInvalidatedSystemAction;
    NSString * _key;
    NSString * _runSource;
    NSString * _shortcutSource;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSString *automationType;
@property (nonatomic) bool completed;
@property (nonatomic) bool didRunRemotely;
@property (nonatomic, retain) NSString *galleryIdentifier;
@property (nonatomic, readonly) bool hasActionIdentifier;
@property (nonatomic, readonly) bool hasAutomationType;
@property (nonatomic) bool hasCompleted;
@property (nonatomic) bool hasDidRunRemotely;
@property (nonatomic, readonly) bool hasGalleryIdentifier;
@property (nonatomic) bool hasIsInvalidatedSystemAction;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasRunSource;
@property (nonatomic, readonly) bool hasShortcutSource;
@property (nonatomic) bool isInvalidatedSystemAction;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *runSource;
@property (nonatomic, retain) NSString *shortcutSource;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)automationType;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didRunRemotely;
- (id)galleryIdentifier;
- (bool)hasActionIdentifier;
- (bool)hasAutomationType;
- (bool)hasCompleted;
- (bool)hasDidRunRemotely;
- (bool)hasGalleryIdentifier;
- (bool)hasIsInvalidatedSystemAction;
- (bool)hasKey;
- (bool)hasRunSource;
- (bool)hasShortcutSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInvalidatedSystemAction;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)runSource;
- (void)setActionIdentifier:(id)arg1;
- (void)setAutomationType:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDidRunRemotely:(bool)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setHasDidRunRemotely:(bool)arg1;
- (void)setHasIsInvalidatedSystemAction:(bool)arg1;
- (void)setIsInvalidatedSystemAction:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setRunSource:(id)arg1;
- (void)setShortcutSource:(id)arg1;
- (id)shortcutSource;
- (void)writeTo:(id)arg1;

@end
