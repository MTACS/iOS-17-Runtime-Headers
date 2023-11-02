
@interface EKChangeListener : NSObject {
    NSPointerArray * _delegates;
}

@property (retain) NSPointerArray *delegates;

+ (id)changedIdentifiersForNotification:(id)arg1;
+ (bool)isSyncStatusChangeNotification:(id)arg1;
+ (id)updatedObjectFor:(id)arg1 changeNotification:(id)arg2;

- (void).cxx_destruct;
- (id)_orderedDelegates;
- (id)delegates;
- (id)init;
- (void)objectsChangedNotification:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)setDelegates:(id)arg1;

@end
