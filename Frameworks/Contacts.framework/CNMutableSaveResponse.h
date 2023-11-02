
@interface CNMutableSaveResponse : CNSaveResponse

@property bool didAffectMeCard;

+ (bool)supportsSecureCoding;

- (void)setContactSnapshot:(id)arg1 forIndexPath:(id)arg2;
- (void)setContainerSnapshot:(id)arg1 forIndexPath:(id)arg2;
- (void)setDidAffectMeCard:(bool)arg1;
- (void)setGroupSnapshot:(id)arg1 forIndexPath:(id)arg2;

@end
