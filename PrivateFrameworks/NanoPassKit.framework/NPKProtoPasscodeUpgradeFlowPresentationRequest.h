
@interface NPKProtoPasscodeUpgradeFlowPresentationRequest : PBRequest <NSCopying> {
    int  _changeType;
    struct { 
        unsigned int changeType : 1; 
    }  _has;
}

@property (nonatomic) int changeType;
@property (nonatomic) bool hasChangeType;

- (int)StringAsChangeType:(id)arg1;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setHasChangeType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
