
@interface BLSHDateSpecifierModel : NSObject {
    NSMapTable * _environmentModels;
    <BLSHInactiveBudgetPolicing_Private> * _inactiveBudgetPolicy;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)clearSpecifiersForEnvironment:(id)arg1;
- (id)initWithInactiveBudgetPolicy:(id)arg1;
- (bool)missingAnySpecifiersInDateInterval:(id)arg1 forPresentation:(id)arg2;
- (id)missingIntervalsForMinimumInterval:(id)arg1 requestInterval:(id)arg2 ofPresentation:(id)arg3;
- (void)purgeSpecifiersBefore:(id)arg1;
- (void)registerSpecifiers:(id)arg1 forDateInterval:(id)arg2 environment:(id)arg3;
- (id)updatesAfterSpecifier:(id)arg1 coalesceFirstUpdateToNowDate:(id)arg2 plusRenderEarlyEpsilon:(double)arg3 untilGapOverDuration:(double)arg4 coaelscingEpsilon:(double)arg5 maximumUpdates:(long long)arg6 lastValidDate:(id)arg7 forPresentation:(id)arg8 environmentFilter:(id /* block */)arg9;

@end
