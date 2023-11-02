
@interface MTRAccessControlClusterAccessControlEntryStruct : NSObject <NSCopying> {
    NSNumber * _authMode;
    NSNumber * _fabricIndex;
    NSNumber * _privilege;
    NSArray * _subjects;
    NSArray * _targets;
}

@property (nonatomic, copy) NSNumber *authMode;
@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSNumber *privilege;
@property (nonatomic, copy) NSArray *subjects;
@property (nonatomic, copy) NSArray *targets;

- (void).cxx_destruct;
- (id)authMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fabricIndex;
- (id)init;
- (id)privilege;
- (void)setAuthMode:(id)arg1;
- (void)setFabricIndex:(id)arg1;
- (void)setPrivilege:(id)arg1;
- (void)setSubjects:(id)arg1;
- (void)setTargets:(id)arg1;
- (id)subjects;
- (id)targets;

@end
