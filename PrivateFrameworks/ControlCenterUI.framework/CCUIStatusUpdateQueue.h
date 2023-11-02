
@interface CCUIStatusUpdateQueue : NSObject {
    NSMutableDictionary * _latestUpdateByIdentifier;
    NSMutableArray * _queuedIdentifiers;
}

- (void).cxx_destruct;
- (id)dequeueNextStatusUpdate;
- (void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2;
- (id)init;
- (void)removeAllStatusUpdates;

@end
