
@interface CMPocketStateManager : NSObject {
    <CMPocketStateDelegate> * _delegate;
    int  fCachedState;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { 
        struct __compressed_pair<CLMotionNotifier::Dispatcher *, std::default_delete<CLMotionNotifier::Dispatcher>> { 
            struct Dispatcher {} *__value_; 
        } __ptr_; 
    }  fDispatcher;
    double  fMaxMonitorTime;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    NSMutableArray * fQueryBlocks;
    NSObject<OS_dispatch_source> * fQueryTimer;
}

@property (nonatomic) <CMPocketStateDelegate> *delegate;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

+ (bool)isPocketStateAvailable;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_disableDispatcher;
- (void)_prepareDispatcher;
- (void)addToAggdScalarWithName:(id)arg1 andScalar:(unsigned long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)externalStateToString:(long long)arg1;
- (id)init;
- (void)onNotification:(id)arg1;
- (void)onPocketStateUpdated:(int)arg1;
- (void)queryStateOntoQueue:(id)arg1 andMonitorFor:(double)arg2 withTimeout:(double)arg3 andHandler:(id /* block */)arg4;
- (void)queryStateOntoQueue:(id)arg1 withTimeout:(double)arg2 andHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (long long)translateInternalState:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (bool)_sb_isScreenObscuredInPocketState:(long long)arg1;

@end
