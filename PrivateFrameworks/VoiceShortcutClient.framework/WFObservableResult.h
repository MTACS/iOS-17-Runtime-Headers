
@interface WFObservableResult : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _glyphSize;
    NSObject<OS_dispatch_queue> * _observerNotificationQueue;
    NSHashTable * _observers;
    bool  _observingDistributedNotifications;
    NSObject<OS_dispatch_queue> * _serialQueue;
    Class  _valueType;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } glyphSize;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observerNotificationQueue;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic) bool observingDistributedNotifications;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) Class valueType;

+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)arg1 glyphSize:(struct CGSize { double x1; double x2; })arg2;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)arg1 glyphSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)arg1 glyphSize:(struct CGSize { double x1; double x2; })arg2 roundedIcon:(bool)arg3 synchronously:(bool)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)addResultObserver:(id)arg1;
- (void)databaseDidChange:(id)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })glyphSize;
- (void)handleChangeNotification:(id)arg1;
- (id)initWithValueType:(Class)arg1 glyphSize:(struct CGSize { double x1; double x2; })arg2;
- (id)observerNotificationQueue;
- (id)observers;
- (bool)observingDistributedNotifications;
- (void)removeResultObserver:(id)arg1;
- (id)serialQueue;
- (void)setObservingDistributedNotifications:(bool)arg1;
- (void)startConnectionIfNecessary;
- (void)stopConnection;
- (Class)valueType;

@end
