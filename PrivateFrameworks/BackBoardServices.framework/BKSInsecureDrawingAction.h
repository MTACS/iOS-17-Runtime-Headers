
@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic, readonly) NSDictionary *pidToContextInfoDictionary;
@property (nonatomic, readonly) NSArray *processIds;
@property (nonatomic, readonly) NSArray *secureModeViolations;

- (id)_initWithPidToContextInfoDictionary:(id)arg1;
- (id)initWithInfo:(id)arg1 responder:(id)arg2;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithPidToContextIdsDictionary:(id)arg1;
- (id)initWithSecureModeViolations:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)pidToContextInfoDictionary;
- (id)processIds;
- (id)secureModeViolations;

@end
