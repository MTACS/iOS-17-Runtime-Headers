
@interface VSAccountSerializationCenter : NSObject {
    NSOperationQueue * _serializationQueue;
    VSPersistentStorage * _storage;
}

@property (nonatomic, retain) NSOperationQueue *serializationQueue;
@property (nonatomic, retain) VSPersistentStorage *storage;
@property (nonatomic, retain) NSUndoManager *undoManager;

+ (id)defaultSerializationCenter;

- (void).cxx_destruct;
- (id)exportDataWithCompletionHandler:(id /* block */)arg1;
- (id)importData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)serializationQueue;
- (void)setSerializationQueue:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (id)storage;
- (id)undoManager;

@end
