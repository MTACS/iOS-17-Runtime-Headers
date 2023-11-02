
@protocol EKChangeListenerDelegate <NSObject>

@required

- (NSArray *)trackedObjects;
- (void)trackedObjectsDidUpdate:(NSDictionary *)arg1;

@optional

- (bool)hasUpdatePriority;
- (void)notifyObservers;
- (NSDictionary *)trackedObjectMap;
- (void)trackedObjectsDidRevert:(NSArray *)arg1;

@end
