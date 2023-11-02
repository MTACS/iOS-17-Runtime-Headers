
@interface PFCloudKitSchemaGenerator : NSObject {
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    _NSDataFileBackedFuture * _representativeFuture;
    PFCloudKitStoreMonitor * _storeMonitor;
}

@property (nonatomic, readonly) _NSDataFileBackedFuture *representativeFuture;

- (void)dealloc;
- (id)initWithMirroringOptions:(id)arg1 forStoreInMonitor:(id)arg2;
- (id)representativeFuture;

@end
