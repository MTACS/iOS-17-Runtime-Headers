
@interface ENTemporaryExposureKeyManager : NSObject {
    <ENTemporaryExposureKeyManagerDelegate> * _delegate;
    unsigned int  _lastTEKRequestENIN;
    NSDate * _nextPromptDate;
    ENTemporaryExposureKey * _oldestTEK;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <ENTemporaryExposureKeyManagerDelegate> *delegate;
@property (nonatomic, readonly) unsigned int lastTEKRequestENIN;
@property (nonatomic, copy) NSDate *nextPromptDate;
@property (nonatomic, readonly) ENTemporaryExposureKey *oldestTEK;

+ (id)temporaryExposureKeyFromRawKey:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_getTemporaryExposureKeysFromRollingStart:(unsigned int)arg1 includingActive:(bool)arg2 refresh:(bool)arg3 error:(id*)arg4;
- (id)delegate;
- (id)getTemporaryExposureKeysForClient:(id)arg1 fromRollingStart:(unsigned int)arg2 didPrompt:(bool)arg3 forTesting:(bool)arg4 forceRefresh:(bool)arg5 error:(id*)arg6;
- (id)getTemporaryExposureKeysFromRollingStart:(unsigned int)arg1 includingActive:(bool)arg2 refresh:(bool)arg3 error:(id*)arg4;
- (id)initWithQueue:(id)arg1;
- (unsigned int)lastTEKRequestENIN;
- (id)nextPromptDate;
- (id)oldestTEK;
- (bool)requireKeyReleasePromptForClient:(id)arg1;
- (void)resetClientState;
- (void)setDelegate:(id)arg1;
- (void)setNextPromptDate:(id)arg1;

@end
