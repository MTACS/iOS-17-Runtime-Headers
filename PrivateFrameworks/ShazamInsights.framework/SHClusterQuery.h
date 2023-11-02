
@interface SHClusterQuery : NSObject {
    NSURL * _destinationURL;
    NSURL * _sourceURL;
    long long  _type;
}

@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) long long type;

+ (id)artistsCluster;
+ (id)clusterForType:(long long)arg1;
+ (id)tracksCluster;

- (void).cxx_destruct;
- (void)controllerForType:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)destinationURL;
- (void)filterMediaItemQueryCollection:(id)arg1 bySeedCollection:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithType:(long long)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3;
- (void)mediaItemsMatchingValuesInCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)mediaItemsWithHighCohesionToValue:(id)arg1 forProperty:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)sourceURL;
- (void)statusWithCompletionHandler:(id /* block */)arg1;
- (long long)type;

@end
