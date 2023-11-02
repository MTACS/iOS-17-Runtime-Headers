
@interface BLTPBSetNotificationsAlertLevelRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int level : 1; 
        unsigned int mirror : 1; 
    }  _has;
    int  _level;
    bool  _mirror;
    NSString * _sectionID;
}

@property (nonatomic) bool hasLevel;
@property (nonatomic) bool hasMirror;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic) int level;
@property (nonatomic) bool mirror;
@property (nonatomic, retain) NSString *sectionID;

- (void).cxx_destruct;
- (int)StringAsLevel:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLevel;
- (bool)hasMirror;
- (bool)hasSectionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)level;
- (id)levelAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)mirror;
- (bool)readFrom:(id)arg1;
- (id)sectionID;
- (void)setHasLevel:(bool)arg1;
- (void)setHasMirror:(bool)arg1;
- (void)setLevel:(int)arg1;
- (void)setMirror:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
