
@interface IRHistoryManager : NSObject <IRPersistenceSynchronizable> {
    IRHistoryEventsContainerDO * _historyEventsContainer;
    NSString * _lastMiLoLabel;
    NSString * _lastMiLoLabelRealTime;
    <IRMiLoFeedbackProvider> * _miloFeedback;
    IRServiceStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IRHistoryEventsContainerDO *historyEventsContainer;
@property (nonatomic, retain) NSString *lastMiLoLabel;
@property (nonatomic, retain) NSString *lastMiLoLabelRealTime;
@property (nonatomic) <IRMiLoFeedbackProvider> *miloFeedback;
@property (nonatomic, retain) IRServiceStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_labelMiLoIfNeeded:(id)arg1 lastMiLoLabel:(id)arg2 shouldLabelEventWithMilo:(bool)arg3;
- (void)addEvent:(id)arg1 forCandidateIdentifier:(id)arg2 withSystemState:(id)arg3 andMiloPrediction:(id)arg4 andMiloPredictionRealTime:(id)arg5 shouldLabelEventWithMilo:(bool)arg6;
- (id)historyEventsContainer;
- (id)initWithStore:(id)arg1 miloFeedback:(id)arg2;
- (id)lastMiLoLabel;
- (id)lastMiLoLabelRealTime;
- (id)miloFeedback;
- (void)setHistoryEventsContainer:(id)arg1;
- (void)setLastMiLoLabel:(id)arg1;
- (void)setLastMiLoLabelRealTime:(id)arg1;
- (void)setMiloFeedback:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)synchronizeAndFetchFromDBOnDisk;

@end
