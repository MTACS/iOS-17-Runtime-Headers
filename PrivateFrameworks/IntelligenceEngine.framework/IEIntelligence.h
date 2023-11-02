
@interface IEIntelligence : NSObject {
    NSString * mFlowId;
    void * mIntelligence;
}

@property (nonatomic, retain) NSString *mFlowId;
@property (nonatomic) void*mIntelligence;

- (void).cxx_destruct;
- (id)activeEvents;
- (id)activeLocalEvents;
- (void)dealloc;
- (id)find:(id)arg1 withId:(id)arg2;
- (id)findInTemplateDir:(id)arg1 withId:(id)arg2;
- (id)flowId;
- (id)getActiveEventsWithScope:(int)arg1;
- (id)getBuildVersion;
- (id)getChangedPersistentVariables;
- (id)getConditions;
- (id)getEvents;
- (id)getExitValue;
- (id)getFormatVersion;
- (id)getInputGroup:(id)arg1;
- (id)getRemainingResponses;
- (id)getUndo;
- (id)getVariables;
- (id)goTo:(id)arg1;
- (bool)hasActiveFallback;
- (id)init;
- (bool)isActive;
- (bool)load:(id)arg1;
- (bool)load:(id)arg1 withFlowId:(id)arg2;
- (bool)load:(id)arg1 withId:(id)arg2;
- (bool)loadFromString:(id)arg1;
- (id)mFlowId;
- (void*)mIntelligence;
- (id)processActivity:(id)arg1;
- (id)processDirectInvocation:(id)arg1;
- (id)processEvent:(id)arg1;
- (id)processText:(id)arg1;
- (id)processText:(id)arg1 withMode:(unsigned long long)arg2 withFallback:(unsigned long long)arg3;
- (void)setExtensions:(id)arg1;
- (void)setMFlowId:(id)arg1;
- (void)setMIntelligence:(void*)arg1;
- (bool)setVariable:(id)arg1 withValue:(id)arg2;
- (id)startConversation;
- (bool)willHandleDirectInvocation:(id)arg1;
- (bool)willHandleEvent:(id)arg1;

@end
