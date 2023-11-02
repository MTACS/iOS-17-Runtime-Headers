
@interface NTKArgonLocalKeyDatabase : NSObject <NTKArgonLocalKeyDatabaseProviding> {
    NSMutableDictionary * _newlyAddedChangeTokens;
    NSMutableOrderedSet * _newlyAddedKeyDescriptors;
    NSMutableDictionary * _newlyAddedKeyDescriptorsByFileName;
    unsigned long long  _nextFlushTime;
    NSMutableDictionary * _persistedChangeTokens;
    NSMutableOrderedSet * _persistedKeyDescriptors;
    NSMutableDictionary * _persistedKeyDescriptorsByFileName;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSString * _storagePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *newlyAddedChangeTokens;
@property (nonatomic, readonly) NSMutableOrderedSet *newlyAddedKeyDescriptors;
@property (nonatomic, readonly) NSMutableDictionary *newlyAddedKeyDescriptorsByFileName;
@property (nonatomic) unsigned long long nextFlushTime;
@property (nonatomic, readonly) NSMutableDictionary *persistedChangeTokens;
@property (nonatomic, readonly) NSMutableOrderedSet *persistedKeyDescriptors;
@property (nonatomic, readonly) NSMutableDictionary *persistedKeyDescriptorsByFileName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic, readonly) NSString *storagePath;
@property (readonly) Class superclass;

+ (id)_argonKeyDatabaseErrorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;
+ (bool)_decodedKeyDescriptors:(id*)arg1 changeTokens:(id*)arg2 fromData:(id)arg3 error:(id*)arg4;
+ (id)_jsonDataForKeyDescriptors:(id)arg1 changeTokens:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_queue_flushImmediately;
- (void)_queue_requestDelayedFlushWithMaximumTimeInterval:(double)arg1;
- (bool)addKeyDescriptor:(id)arg1 error:(id*)arg2;
- (void)enumerateKeyDescriptors:(id /* block */)arg1;
- (void)flush;
- (void)flushWithinTimeInterval:(double)arg1;
- (id)initWithKeyStoragePath:(id)arg1;
- (id)keyDescriptorForFileName:(id)arg1;
- (id)latestChangeTokenForServerIdentifier:(id)arg1;
- (id)newlyAddedChangeTokens;
- (id)newlyAddedKeyDescriptors;
- (id)newlyAddedKeyDescriptorsByFileName;
- (unsigned long long)nextFlushTime;
- (id)persistedChangeTokens;
- (id)persistedKeyDescriptors;
- (id)persistedKeyDescriptorsByFileName;
- (void)recordChangeToken:(id)arg1 forServerIdentifier:(id)arg2;
- (void)setNextFlushTime:(unsigned long long)arg1;
- (void)setStateQueue:(id)arg1;
- (id)stateQueue;
- (id)storagePath;

@end
