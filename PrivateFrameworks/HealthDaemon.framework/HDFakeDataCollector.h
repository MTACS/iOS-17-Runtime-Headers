
@interface HDFakeDataCollector : NSObject <HDDataCollector> {
    HDFakeDataCollectorConfiguration * _configuration;
    long long  _datumCount;
    NSObject<OS_dispatch_queue> * _generationQueue;
    NSObject<OS_dispatch_source> * _generationSource;
    NSMutableDictionary * _generatorsByType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDDataCollectorMultiplexer * _multiplexer;
    HDProfile * _profile;
    HDDataCollectorState * _state;
}

@property (nonatomic, copy) HDFakeDataCollectorConfiguration *configuration;
@property (nonatomic, readonly) long long datumCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)collectedTypes;

- (void).cxx_destruct;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (bool)canResumeCollectionFromLastSensorDatum;
- (id)configuration;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (long long)datumCount;
- (void)dealloc;
- (void)generateForConfiguration:(id)arg1 from:(id)arg2 to:(id)arg3;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)registerWithAggregators;
- (void)setConfiguration:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (void)unregisterFromAggregators;

@end
