
@interface SATimerTimerShow : SADomainCommand <SATimerTimerAction>

@property (nonatomic, copy) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *timerIds;

+ (id)timerShow;
+ (id)timerShowWithDictionary:(id)arg1 context:(id)arg2;

- (id)actions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setActions:(id)arg1;
- (void)setTimerIds:(id)arg1;
- (id)timerIds;

@end
