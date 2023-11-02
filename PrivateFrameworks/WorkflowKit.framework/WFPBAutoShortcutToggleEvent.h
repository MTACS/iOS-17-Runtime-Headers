
@interface WFPBAutoShortcutToggleEvent : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    bool  _enabled;
    struct { 
        unsigned int enabled : 1; 
    }  _has;
    NSString * _key;
    NSString * _source;
    NSString * _toggleType;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic) bool hasEnabled;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, readonly) bool hasToggleType;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *source;
@property (nonatomic, retain) NSString *toggleType;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (bool)hasBundleIdentifier;
- (bool)hasEnabled;
- (bool)hasKey;
- (bool)hasSource;
- (bool)hasToggleType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setToggleType:(id)arg1;
- (id)source;
- (id)toggleType;
- (void)writeTo:(id)arg1;

@end
