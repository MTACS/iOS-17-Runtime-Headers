
@interface APOdmlVectorBuilder : NSObject {
    NSMutableDictionary * _adamIDtoBundleID;
    bool  _assetManagerIsCounterfactual;
    NSMutableArray * _consumedEvents;
    NSArray * _events;
    double  _exponentialDecayConstant;
    _DKKnowledgeStore * _knowledgeStore;
    double  _lookbackPeriod;
    long long  _maxQueryElements;
    APOdmlUnfairLock * _setVectorAndWeightLock;
    APOdmlXpcLifecycleHandler * _task;
    APOdmlVector * _vector;
    double  _vectorWeightTotal;
    NSString * _version;
    bool  _weightByDuration;
}

@property (nonatomic, retain) NSMutableDictionary *adamIDtoBundleID;
@property (nonatomic) bool assetManagerIsCounterfactual;
@property (nonatomic, retain) NSMutableArray *consumedEvents;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic) double exponentialDecayConstant;
@property (nonatomic, retain) _DKKnowledgeStore *knowledgeStore;
@property (nonatomic) double lookbackPeriod;
@property (nonatomic) long long maxQueryElements;
@property (nonatomic, retain) APOdmlUnfairLock *setVectorAndWeightLock;
@property (nonatomic, retain) APOdmlXpcLifecycleHandler *task;
@property (nonatomic, retain) APOdmlVector *vector;
@property (nonatomic) double vectorWeightTotal;
@property (nonatomic, retain) NSString *version;
@property (nonatomic) bool weightByDuration;

- (void).cxx_destruct;
- (id)adamIDForBundleID:(id)arg1;
- (id)adamIDtoBundleID;
- (void)addAppVector:(id)arg1;
- (bool)assetManagerIsCounterfactual;
- (void)buildBundleIDtoAdamIDCache:(id)arg1;
- (id)consumedEvents;
- (id)descriptionForEvent:(id)arg1;
- (id)eventName;
- (id)events;
- (id)eventsBetween:(id)arg1 and:(id)arg2 withLimit:(unsigned long long)arg3;
- (id)eventsForLookbackPeriod:(double)arg1;
- (id)executeQuery:(id)arg1;
- (double)exponentialDecayConstant;
- (id)initWithVersion:(id)arg1 lookbackPeriod:(id)arg2 maxQueryElements:(id)arg3 task:(id)arg4 exponentialDecayConstant:(id)arg5 weightByDuration:(id)arg6 isCounterfactual:(bool)arg7;
- (id)knowledgeStore;
- (double)lookbackPeriod;
- (long long)maxQueryElements;
- (id)pullEvents;
- (id)retrieveFilteredEvents:(id)arg1;
- (id)retrieveVector:(id*)arg1;
- (void)setAdamIDtoBundleID:(id)arg1;
- (void)setAssetManagerIsCounterfactual:(bool)arg1;
- (void)setConsumedEvents:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setExponentialDecayConstant:(double)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setLookbackPeriod:(double)arg1;
- (void)setMaxQueryElements:(long long)arg1;
- (void)setSetVectorAndWeightLock:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setVector:(id)arg1;
- (id)setVectorAndWeightLock;
- (void)setVectorWeightTotal:(double)arg1;
- (void)setVersion:(id)arg1;
- (void)setWeightByDuration:(bool)arg1;
- (bool)shouldDefer;
- (id)task;
- (id)updateVector:(id)arg1 withVector:(id)arg2 usingWeight:(double)arg3;
- (id)vector;
- (double)vectorWeightTotal;
- (id)version;
- (bool)weightByDuration;
- (double)weightForEvents:(id)arg1;

@end
