
@interface BLTPBSetNotificationsSoundRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int sound : 1; 
    }  _has;
    NSString * _sectionID;
    int  _sound;
}

@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic) bool hasSound;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) int sound;

- (void).cxx_destruct;
- (int)StringAsSound:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionID;
- (bool)hasSound;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionID;
- (void)setHasSound:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSound:(int)arg1;
- (int)sound;
- (id)soundAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
