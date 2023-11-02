
@interface NSCloudKitMirroringResult : NSPersistentStoreResult {
    NSError * _error;
    bool  _madeChanges;
    NSCloudKitMirroringRequest * _request;
    NSString * _storeIdentifier;
    bool  _success;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool madeChanges;
@property (nonatomic, readonly) NSCloudKitMirroringRequest *request;
@property (nonatomic, readonly) NSString *storeIdentifier;
@property (nonatomic, readonly) bool success;

- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithRequest:(id)arg1 storeIdentifier:(id)arg2 success:(bool)arg3 madeChanges:(bool)arg4 error:(id)arg5;
- (bool)madeChanges;
- (id)request;
- (id)storeIdentifier;
- (bool)success;

@end
