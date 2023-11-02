
@interface ASNotificationStep : NSObject {
    id /* block */  _notifyObserverBlock;
    id /* block */  _objectTransformationBlock;
    id /* block */  _objectsTransformationBlock;
    NSSet * _recordTypes;
    id /* block */  _shouldNotifyObserverBlock;
}

@property (nonatomic, copy) id /* block */ notifyObserverBlock;
@property (nonatomic, copy) id /* block */ objectTransformationBlock;
@property (nonatomic, copy) id /* block */ objectsTransformationBlock;
@property (nonatomic, retain) NSSet *recordTypes;
@property (nonatomic, copy) id /* block */ shouldNotifyObserverBlock;

- (void).cxx_destruct;
- (id /* block */)notifyObserverBlock;
- (id /* block */)objectTransformationBlock;
- (id /* block */)objectsTransformationBlock;
- (id)objectsTransformedFromRecords:(id)arg1 cloudKitManager:(id)arg2;
- (id)recordTypes;
- (void)setNotifyObserverBlock:(id /* block */)arg1;
- (void)setObjectTransformationBlock:(id /* block */)arg1;
- (void)setObjectsTransformationBlock:(id /* block */)arg1;
- (void)setRecordTypes:(id)arg1;
- (void)setShouldNotifyObserverBlock:(id /* block */)arg1;
- (id /* block */)shouldNotifyObserverBlock;

@end
