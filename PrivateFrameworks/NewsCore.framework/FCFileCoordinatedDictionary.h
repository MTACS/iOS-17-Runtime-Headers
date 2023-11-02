
@interface FCFileCoordinatedDictionary : NSObject <NSFilePresenter> {
    NSSet * _allowedClasses;
    FCAsyncSerialQueue * _asyncAccessQueue;
    NSURL * _fileURL;
    NSOperationQueue * _presentedItemOperationQueue;
    NSURL * _presentedItemURL;
}

@property (nonatomic, readonly, copy) NSSet *allowedClasses;
@property (nonatomic, readonly) FCAsyncSerialQueue *asyncAccessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allowedClasses;
- (id)asyncAccessQueue;
- (id)fileURL;
- (id)init;
- (id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (bool)readSyncWithAccessor:(id /* block */)arg1;
- (void)readWithAccessor:(id /* block */)arg1;
- (bool)writeSyncWithAccessor:(id /* block */)arg1;
- (void)writeWithAccessor:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
