
@interface AEAssessmentParticipantConfiguration : NSObject <NSCopying> {
    bool  _allowsNetworkAccess;
}

@property (nonatomic) bool allowsNetworkAccess;

+ (id)__configurationAllowingAll;
+ (id)instanceFromIndividualConfiguration:(id)arg1;
+ (id)new;

- (bool)__allowsNetworkAccess;
- (bool)allowsNetworkAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)individualConfiguration;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAllowsNetworkAccess:(bool)arg1;
- (void)set__allowsNetworkAccess:(bool)arg1;

@end
