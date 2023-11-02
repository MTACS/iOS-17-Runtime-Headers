
@interface ICIAMMessagePresentationTrigger : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    struct { 
        unsigned int kind : 1; 
    }  _has;
    int  _kind;
    NSString * _triggerName;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic) bool hasKind;
@property (nonatomic, readonly) bool hasTriggerName;
@property (nonatomic) int kind;
@property (nonatomic, retain) NSString *triggerName;

- (void).cxx_destruct;
- (int)StringAsKind:(id)arg1;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasKind;
- (bool)hasTriggerName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)kind;
- (id)kindAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setHasKind:(bool)arg1;
- (void)setKind:(int)arg1;
- (void)setTriggerName:(id)arg1;
- (id)triggerName;
- (void)writeTo:(id)arg1;

@end
