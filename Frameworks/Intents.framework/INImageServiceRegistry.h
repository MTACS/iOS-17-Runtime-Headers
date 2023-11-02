
@interface INImageServiceRegistry : NSObject {
    NSMutableDictionary * _imageServicesByServiceIdentifier;
    NSMutableArray * _prioritySortedImageServices;
    NSObject<OS_dispatch_queue> * _registryQueue;
}

@property (nonatomic, readonly, copy) NSArray *imageLoaders;
@property (nonatomic, readonly, copy) NSArray *imageServices;
@property (nonatomic, readonly, copy) NSArray *imageStorageServices;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_reprioritizeImageServices;
- (id)imageLoaderForServiceIdentifier:(id)arg1;
- (id)imageLoaders;
- (id)imageServiceForServiceIdentifier:(id)arg1;
- (id)imageServices;
- (id)imageStorageServiceForServiceIdentifier:(id)arg1;
- (id)imageStorageServices;
- (id)init;
- (void)registerImageService:(id)arg1;
- (void)unregisterImageService:(id)arg1;

@end
