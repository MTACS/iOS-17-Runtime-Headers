
@interface ICImageAnalysisController : NSObject {
    NSObject<OS_dispatch_queue> * _photoLibraryQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *photoLibraryQueue;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)analyzeSearchableItems:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)photoLibraryQueue;

@end
