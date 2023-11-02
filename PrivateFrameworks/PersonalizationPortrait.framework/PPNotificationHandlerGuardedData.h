
@interface PPNotificationHandlerGuardedData : NSObject {
    NSMapTable * _blockMap;
    bool  _delayedFiringInProgress;
    double  _lastFiringTimeSince1970;
    NSMutableSet * _objects;
}

- (void).cxx_destruct;
- (id)init;

@end
