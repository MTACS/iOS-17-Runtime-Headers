
@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol> {
    _KSTextReplacementCKStore * _ckStore;
    NSString * _directoryPath;
    NSObject<_KSTextReplacementSyncProtocol> * _textReplacementStore;
}

@property (nonatomic, retain) _KSTextReplacementCKStore *ckStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<_KSTextReplacementSyncProtocol> *textReplacementStore;

+ (id)textReplacementStoreWithTestDirectory:(id)arg1 withDelegate:(id)arg2;

- (void).cxx_destruct;
- (id)ckStore;
- (void)dealloc;
- (id)directoryPath;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithDirectoryPath:(id)arg1;
- (double)minimumUptimeRemaining;
- (void)notifyTextReplacementDidChange;
- (void)pushAllLocalRecordsOnceIfNeeded;
- (void)recordSyncStatus;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)setCkStore:(id)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setTextReplacementStore:(id)arg1;
- (id)textReplacementStore;

@end
