
@interface NPKProtoCheckPasscodePolicyComplianceRequest : PBRequest <NSCopying> {
    bool  _applyBackgroundEnforcementIfNecessary;
    bool  _applyRestrictions;
    int  _enforcedPolicy;
    struct { 
        unsigned int enforcedPolicy : 1; 
        unsigned int applyBackgroundEnforcementIfNecessary : 1; 
        unsigned int applyRestrictions : 1; 
    }  _has;
}

@property (nonatomic) bool applyBackgroundEnforcementIfNecessary;
@property (nonatomic) bool applyRestrictions;
@property (nonatomic) int enforcedPolicy;
@property (nonatomic) bool hasApplyBackgroundEnforcementIfNecessary;
@property (nonatomic) bool hasApplyRestrictions;
@property (nonatomic) bool hasEnforcedPolicy;

- (int)StringAsEnforcedPolicy:(id)arg1;
- (bool)applyBackgroundEnforcementIfNecessary;
- (bool)applyRestrictions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)enforcedPolicy;
- (id)enforcedPolicyAsString:(int)arg1;
- (bool)hasApplyBackgroundEnforcementIfNecessary;
- (bool)hasApplyRestrictions;
- (bool)hasEnforcedPolicy;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApplyBackgroundEnforcementIfNecessary:(bool)arg1;
- (void)setApplyRestrictions:(bool)arg1;
- (void)setEnforcedPolicy:(int)arg1;
- (void)setHasApplyBackgroundEnforcementIfNecessary:(bool)arg1;
- (void)setHasApplyRestrictions:(bool)arg1;
- (void)setHasEnforcedPolicy:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
