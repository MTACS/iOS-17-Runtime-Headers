
@interface CRRegisterGreatest : CRRegisterLatest

- (long long)compare:(id)arg1 with:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)mergeWithRegisterGreatest:(id)arg1;
- (void)setContents:(id)arg1;

@end
