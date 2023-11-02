
@interface PBItemRepresentation : NSObject {
    <PBItemRepresentationDataTransferDelegate> * _dataTransferDelegate;
    bool  _isDataAvailableImmediately;
    id /* block */  _loader;
    unsigned long long  _preferredRepresentation;
    NSString * _typeIdentifier;
    long long  _visibility;
}

@property (nonatomic) <PBItemRepresentationDataTransferDelegate> *dataTransferDelegate;
@property (nonatomic) bool isDataAvailableImmediately;
@property (nonatomic) unsigned long long preferredRepresentation;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;
@property (nonatomic) long long visibility;

- (void).cxx_destruct;
- (id)_loadWithContext:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)copyWithDoNothingLoaderBlock;
- (id)dataTransferDelegate;
- (id)initWithNSItemRepresentation:(id)arg1;
- (id)initWithType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(id /* block */)arg3;
- (id)initWithType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 v2_loader:(id /* block */)arg3;
- (id)initWithType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 v3_loader:(id /* block */)arg3;
- (bool)isDataAvailableImmediately;
- (id)loadDataWithCompletion:(id /* block */)arg1;
- (id)loadDataWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)loadDataWithDetailedCompletion:(id /* block */)arg1;
- (id)loadFileCopyWithCompletion:(id /* block */)arg1;
- (id)loadFileCopyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)loadFileCopyWithDetailedCompletion:(id /* block */)arg1;
- (id)loadOpenInPlaceWithCompletion:(id /* block */)arg1;
- (id)loadOpenInPlaceWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)loadOpenInPlaceWithDetailedCompletion:(id /* block */)arg1;
- (id)loadWithCompletionHandler:(id /* block */)arg1;
- (id)loadWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)performProgressTrackingWithLoaderBlock:(id /* block */)arg1 onCancelCallback:(id /* block */)arg2;
- (unsigned long long)preferredRepresentation;
- (void)setDataTransferDelegate:(id)arg1;
- (void)setIsDataAvailableImmediately:(bool)arg1;
- (void)setLoaderBlock:(id /* block */)arg1;
- (void)setPreferredRepresentation:(unsigned long long)arg1;
- (void)setVisibility:(long long)arg1;
- (id)typeIdentifier;
- (long long)visibility;

@end
