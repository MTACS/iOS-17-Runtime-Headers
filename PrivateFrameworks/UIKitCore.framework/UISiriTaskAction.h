
@interface UISiriTaskAction : BSAction

@property (nonatomic, readonly, retain) AFSiriTask *payload;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithPayload:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)payload;

@end
