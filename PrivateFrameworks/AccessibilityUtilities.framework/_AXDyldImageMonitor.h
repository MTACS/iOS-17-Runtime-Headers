
@interface _AXDyldImageMonitor : NSObject <AXImageMonitor> {
    NSHashTable * _imageMonitorObservers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dyldDidAddImage:(id)arg1;
- (void)addImageMonitorObserver:(id)arg1;
- (void)enumerateLoadedImagePaths:(id /* block */)arg1;
- (id)init;
- (id)loadedImagePaths;
- (id)queue;
- (void)removeImageMonitorObserver:(id)arg1;

@end
