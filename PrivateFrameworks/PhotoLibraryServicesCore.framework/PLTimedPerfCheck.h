
@interface PLTimedPerfCheck : NSObject {
    double  _initialProcessMemoryCurrent;
    double  _initialProcessMemoryPeak;
    bool  _isSessionCompleted;
    struct pc_session { } * _pc_session;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sessionCompletedLock;
}

+ (id)start;

- (void)dealloc;
- (id)endSessionAndReturnPerfCheckExtraInformation;
- (id)init;
- (id)perfCheckLogStringWithPerfCheckInfo:(id)arg1;
- (struct PLUnitMultiplier { double x1[6]; char *x2[6]; })perfUnitsFromPerfCheckInfo:(id)arg1;
- (void)setup;
- (id)stop;

@end
