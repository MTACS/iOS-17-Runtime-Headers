
@interface SBSceneSnapshotRequest : NSObject <BSDescriptionProviding> {
    unsigned long long  _orientation;
    unsigned long long  _size;
    unsigned long long  _userInterfaceStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long orientation;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long userInterfaceStyle;

- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithSize:(unsigned long long)arg1 orientation:(unsigned long long)arg2 userInterfaceStyle:(unsigned long long)arg3;
- (unsigned long long)orientation;
- (unsigned long long)size;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)userInterfaceStyle;

@end
