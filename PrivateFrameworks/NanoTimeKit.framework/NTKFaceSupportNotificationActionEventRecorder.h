
@interface NTKFaceSupportNotificationActionEventRecorder : NSObject {
    NTKFaceSupportDateDatabase * _database;
    NSMapTable * _lookup;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NTKFaceSupportDateDatabase *database;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSMapTable *lookup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_queue_beginPresentationForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_endPresentationForIdentifier:(id)arg1 withAction:(long long)arg2 completion:(id /* block */)arg3;
- (id)_validateIdentifier:(id)arg1;
- (void)beginPresentationForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)database;
- (void)endPresentationForIdentifier:(id)arg1 withAction:(long long)arg2 completion:(id /* block */)arg3;
- (id)filePath;
- (id)initWithFilePath:(id)arg1;
- (id)lookup;
- (id)queue;

@end
