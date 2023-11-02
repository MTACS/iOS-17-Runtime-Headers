
@interface NSOperationQueue : NSObject <ASDTaskScheduler, NSProgressReporting> {
    struct { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } __queueLock; 
        NSOperation *__firstOperation; 
        NSOperation *__lastOperation; 
        NSOperation *__firstPriOperation[6]; 
        NSOperation *__lastPriOperation[6]; 
        NSMutableArray *_barriers; 
        _NSOperationQueueProgress *_progress; 
        _Atomic unsigned long long __operationCount; 
        NSPointerArray *__activeThreads; 
        long long __maxNumOps; 
        int __actualMaxNumOps; 
        int __numExecOps; 
        NSObject<OS_dispatch_queue> *__dispatch_queue; 
        NSObject<OS_dispatch_queue> *__backingQueue; 
        NSString *__name; 
        BOOL __nameBuffer[300]; 
        _Atomic bool __suspended; 
        _Atomic bool __overcommit; 
        _Atomic unsigned char __propertyQoS; 
        _Atomic unsigned char __operationsObserverCount; 
        _Atomic unsigned char __operationCountObserverCount; 
        _Atomic unsigned char __progressReporting; 
        unsigned char __mainQ; 
    }  _iqp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long maxConcurrentOperationCount;
@property (copy) NSString *name;
@property (readonly) NSProgress *progress;
@property long long qualityOfService;
@property (readonly) Class superclass;
@property (getter=isSuspended) bool suspended;
@property (nonatomic, readonly) bool tsu_isCurrentQueue;
@property NSObject<OS_dispatch_queue> *underlyingQueue;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentQueue;
+ (id)mainQueue;

- (id)__graphDescription;
- (void)_fc_addUncancellableOperationForReactorID:(id)arg1 block:(id /* block */)arg2;
- (void)_fc_addUncancellableOperationWithBlock:(id /* block */)arg1;
- (void)addBarrierBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(id /* block */)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isSuspended;
- (long long)maxConcurrentOperationCount;
- (id)name;
- (unsigned long long)operationCount;
- (id)operations;
- (bool)overcommitsOperations;
- (id)progress;
- (long long)qualityOfService;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOvercommitsOperations:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setUnderlyingQueue:(id)arg1;
- (id)underlyingQueue;
- (void)waitUntilAllOperationsAreFinished;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)queueWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon

- (void)scheduleBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_operationQueueWithUnderlyingQueue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary

+ (id)bl_sharedHLSKeyRequestOperationQueue;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (void)cancelAllOperationsWithError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter

- (void)addOperationWithBlock:(id /* block */)arg1 queuePriority:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (void)decreaseQualityOfService;
- (void)increaseQualityOfService;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_prewarmQueue;
+ (id)fc_sharedConcurrentQueue;
+ (id)fc_sharedSerialQueue;
+ (id)fc_throttledCKRequestOperationQueue;

- (void)fc_addAsyncOperationWithBlock:(id /* block */)arg1;
- (void)fc_addMainThreadOperationWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (bool)containsOperationToDeleteRecordID:(id)arg1;
- (bool)containsOperationToFetchRecordID:(id)arg1;
- (bool)containsOperationToSaveRecordID:(id)arg1;
- (id)existingOperationToDeleteRecordID:(id)arg1;
- (id)existingOperationToFetchRecordID:(id)arg1;
- (id)existingOperationToSaveRecordID:(id)arg1;
- (id)iterativelyCancelDependentOperations:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_newSerialOperationQueueWithName:(id)arg1;

- (bool)tsu_isCurrentQueue;
- (void)tsu_performBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

+ (id)re_sharedSerialOperationQueue;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (void)rc_addAsyncOperationWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal

- (void)logStateOperationCountGreaterThan:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (id)wlkDefaultConcurrentQueue;
+ (id)wlkDefaultQueue;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)ic_sharedRequestOperationQueueWithQualityOfService:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_newSerialOperationQueueWithName:(id)arg1;

@end
