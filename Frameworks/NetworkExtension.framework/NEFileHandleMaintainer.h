
@interface NEFileHandleMaintainer : NSObject {
    NSObject<OS_xpc_object> * _auxiliaryDataDictionary;
    bool  _changed;
    NSString * _eventName;
    NSMutableArray * _fileHandles;
    bool  _isOwnerMode;
    id /* block */  _receivedHandlesCallback;
}

@property (retain) NSString *eventName;

+ (id)sharedMaintainer;

- (void).cxx_destruct;
- (void)commit;
- (id)copyAuxiliaryDataForKey:(id)arg1;
- (id)createEvent;
- (id)eventName;
- (id)init;
- (void)iterateFileHandlesWithBlock:(id /* block */)arg1;
- (void)removeFileHandleMatchingPredicate:(id /* block */)arg1;
- (void)resetFileHandlesFromEvent:(id)arg1;
- (void)setAuxiliaryData:(id)arg1 forKey:(id)arg2;
- (void)setEventName:(id)arg1;
- (void)setFileHandle:(id)arg1 matchingPredicate:(id /* block */)arg2;
- (void)startOwnerModeWithEventName:(id)arg1 handlesReceivedCallback:(id /* block */)arg2;

@end
