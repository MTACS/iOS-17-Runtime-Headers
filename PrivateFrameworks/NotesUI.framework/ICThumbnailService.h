
@interface ICThumbnailService : NSObject <ICManagedObjectContextChangeControllerDelegate> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    <ICThumbnailCaching> * _cache;
    NSMutableDictionary * _callbacks;
    ICManagedObjectContextChangeController * _managedObjectChangeController;
    NSObject<OS_dispatch_queue> * _schedulingSerialQueue;
    NSOperationQueue * _thumbnailGenerationQueue;
    NSManagedObjectContext * _viewContext;
    NSManagedObjectContext * _workerContext;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (nonatomic, readonly) <ICThumbnailCaching> *cache;
@property (nonatomic, retain) NSMutableDictionary *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICManagedObjectContextChangeController *managedObjectChangeController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *schedulingSerialQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSOperationQueue *thumbnailGenerationQueue;
@property (nonatomic, readonly) NSManagedObjectContext *viewContext;
@property (nonatomic, readonly) NSManagedObjectContext *workerContext;

+ (id)sharedThumbnailService;

- (void).cxx_destruct;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;
- (id)backgroundQueue;
- (id)cache;
- (id)callbacks;
- (void)dealloc;
- (id)init;
- (id)initWithViewContext:(id)arg1 workerContext:(id)arg2;
- (id)managedObjectChangeController;
- (id)managedObjectContextChangeController:(id)arg1 managedObjectIDsToUpdateForUpdatedManagedObjects:(id)arg2;
- (void)managedObjectContextChangeController:(id)arg1 performUpdatesForManagedObjectIDs:(id)arg2;
- (bool)managedObjectContextChangeControllerShouldUpdateImmediately:(id)arg1;
- (void)processThumbnailDescriptionResult:(id)arg1;
- (id)schedulingSerialQueue;
- (void)setBackgroundQueue:(id)arg1;
- (void)setCallbacks:(id)arg1;
- (void)setManagedObjectChangeController:(id)arg1;
- (void)setSchedulingSerialQueue:(id)arg1;
- (void)setThumbnailGenerationQueue:(id)arg1;
- (id)thumbnailGenerationQueue;
- (id)thumbnailGeneratorForConfiguration:(id)arg1;
- (id)thumbnailWithConfiguration:(id)arg1;
- (void)thumbnailWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)thumbnailsWithConfigurations:(id)arg1 completion:(id /* block */)arg2;
- (id)viewContext;
- (id)workerContext;

@end
