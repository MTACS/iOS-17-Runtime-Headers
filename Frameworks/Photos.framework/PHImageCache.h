
@interface PHImageCache : NSObject {
    NSMutableDictionary * _backingDictionary;
    <PHImageCacheDelegate> * _delegate;
    PHRecyclableObjectVendor * _entryVendor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _uncommittedDeletes;
    NSMutableDictionary * _uncommittedInserts;
}

@property (nonatomic) <PHImageCacheDelegate> *delegate;

- (void).cxx_destruct;
- (void)_didReceiveMemoryWarningNotification:(id)arg1;
- (void)_removeEntry:(id)arg1;
- (void)commitChangesWithQueueToProcessDeletes:(id)arg1;
- (id)delegate;
- (id)init;
- (bool)pinEntryForKey:(id)arg1 requestID:(int)arg2 inFlightRequestID:(int*)arg3;
- (bool)populateEntryWithImage:(struct CGImage { }*)arg1 requestID:(int)arg2 forKey:(id)arg3 additionalInfo:(id)arg4;
- (void)queryEntryForKey:(id)arg1 didWaitForInFlightRequest:(bool*)arg2 didFindImage:(bool*)arg3 entryIsValidBlock:(id /* block */)arg4 resultHandler:(id /* block */)arg5;
- (void)removeAllEntries;
- (void)removeEntriesForKeys:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
