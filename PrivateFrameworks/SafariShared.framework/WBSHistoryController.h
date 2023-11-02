
@interface WBSHistoryController : NSObject {
    NSMapTable * _historyMap;
    NSMapTable * _historySessionControllerMap;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)existingSharedHistoryController;

- (void).cxx_destruct;
- (id)_createHistoryForProfileIdentifier:(id)arg1;
- (id)_createHistorySessionControllerForHistory:(id)arg1;
- (id)historyForProfileIdentifier:(id)arg1 loadIfNeeded:(bool)arg2;
- (id)historySessionControllerForProfileIdentifier:(id)arg1 loadIfNeeded:(bool)arg2;
- (id)init;
- (id)normalizeProfileIdentifier:(id)arg1;
- (void)removeProfileWithIdentifier:(id)arg1;

@end
