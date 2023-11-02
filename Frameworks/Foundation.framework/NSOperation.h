
@interface NSOperation : NSObject <FCOperationIdentifying, ICLoggable, RCOperationIdentifying> {
    struct { 
        NSOperation *__prevOp; 
        NSOperation *__nextOp; 
        NSOperation *__nextPriOp; 
        NSOperationQueue *__queue; 
        NSMutableArray *__dependencies; 
        NSHashTable *__down_dependencies; 
        long long __unfinished_deps; 
        id /* block */ __completion; 
        void *__obsInfo; 
        void *__implicitObsInfo; 
        double __thread_prio; 
        char *__nameBuffer; 
        NSObject<OS_voucher> *_voucher; 
        id /* block */ __schedule; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __wait_mutex; 
        struct _opaque_pthread_cond_t { 
            long long __sig; 
            BOOL __opaque[40]; 
        } __wait_cond; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } __lock; 
        bool _shouldRemoveDependenciesAfterFinish; 
        _Atomic unsigned char __state; 
        BOOL __prio; 
        _Atomic bool __cached_isReady; 
        _Atomic bool __isCancelled; 
        _Atomic unsigned char __propertyQoS; 
        _Atomic unsigned char __isExecutingObserverCount; 
        _Atomic unsigned char __isFinishedObserverCount; 
        _Atomic unsigned char __isReadyObserverCount; 
        _Atomic unsigned char __isCancelledObserverCount; 
    }  _iop;
}

@property (getter=isAsynchronous, readonly) bool asynchronous;
@property (getter=isCancelled, readonly) bool cancelled;
@property (copy) id /* block */ completionBlock;
@property (getter=isConcurrent, readonly) bool concurrent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting, readonly) bool executing;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (setter=ic_setResistsCancellation:, nonatomic) bool ic_resistsCancellation;
@property (nonatomic, readonly) NSString *longOperationDescription;
@property (copy) NSString *name;
@property long long qualityOfService;
@property long long queuePriority;
@property (getter=isReady, readonly) bool ready;
@property (nonatomic, readonly) NSString *shortOperationDescription;
@property (readonly) Class superclass;
@property double threadPriority;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_removesDependenciesAfterFinish;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentOperation;
+ (id)keyPathsForValuesAffectingCancelled;
+ (id)keyPathsForValuesAffectingExecuting;
+ (id)keyPathsForValuesAffectingFinished;
+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingReady;

- (id)__graphDescription:(unsigned long long)arg1;
- (id /* block */)_copyCompletionBlock;
- (id)_implicitObservationInfo;
- (void)addDependency:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)cancel;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)debugDescription;
- (id)dependencies;
- (id)description;
- (id)init;
- (bool)isAsynchronous;
- (bool)isCancelled;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (void)main;
- (id)name;
- (void*)observationInfo;
- (long long)qualityOfService;
- (long long)queuePriority;
- (void)removeAllDependencies;
- (void)removeDependency:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setQueuePriority:(long long)arg1;
- (void)setThreadPriority:(double)arg1;
- (void)start;
- (double)threadPriority;
- (void)waitUntilFinished;
- (void)waitUntilFinishedOrTimeout:(double)arg1;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

- (void)cat_addDependencies:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)lightweightDescription;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (void)decreasePriority;
- (void)increasePriority;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)longOperationDescription;
- (id)shortOperationDescription;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (bool)ic_resistsCancellation;
- (void)ic_setResistsCancellation:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (id)longOperationDescription;
- (id)shortOperationDescription;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

- (id)lightweightDescription;

@end
