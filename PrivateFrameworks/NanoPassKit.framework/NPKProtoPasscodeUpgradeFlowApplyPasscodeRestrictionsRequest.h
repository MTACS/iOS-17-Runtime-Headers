
@interface NPKProtoPasscodeUpgradeFlowApplyPasscodeRestrictionsRequest : PBRequest <NSCopying> {
    int  _enforcedPolicy;
    struct { 
        unsigned int enforcedPolicy : 1; 
    }  _has;
}

@property (nonatomic) int enforcedPolicy;
@property (nonatomic) bool hasEnforcedPolicy;

- (int)StringAsEnforcedPolicy:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)enforcedPolicy;
- (id)enforcedPolicyAsString:(int)arg1;
- (bool)hasEnforcedPolicy;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnforcedPolicy:(int)arg1;
- (void)setHasEnforcedPolicy:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
