
@interface SNThresholdBasedSecondPassController : NSObject <SNSecondPassController> {
    id /* block */  _beginSecondPassHandler;
    id /* block */  _endSecondPassHandler;
    id /* block */  _firstPassResultToComparableFunction;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstResultBelowEndThresholdStartTime;
    double  _secondPassBeginThreshold;
    double  _secondPassEndThreshold;
    double  _secondPassHangoverPeriod;
    bool  _secondPassIsActive;
    id /* block */  _secondPassResultToComparableFunction;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _secondPassTriggerTime;
}

@property (copy) id /* block */ beginSecondPassHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ endSecondPassHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)beginSecondPassHandler;
- (id /* block */)endSecondPassHandler;
- (void)firstPassDidProduceResult:(id)arg1;
- (void)secondPassDidProduceResult:(id)arg1;
- (void)setBeginSecondPassHandler:(id /* block */)arg1;
- (void)setEndSecondPassHandler:(id /* block */)arg1;

@end
