
@interface SBEmitStudyLogSwitcherEventResponse : SBSwitcherModifierEventResponse {
    NSString * _name;
    NSDictionary * _payload;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSDictionary *payload;

- (void).cxx_destruct;
- (id)initWithStudyLogWithName:(id)arg1 payload:(id)arg2;
- (id)name;
- (id)payload;
- (long long)type;

@end
