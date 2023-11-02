
@interface _UISaveToCameraRollSaveItemsController : NSObject {
    NSError * _errorToReport;
    NSArray * _itemsToSchedule;
    long long  _pendingSaveCount;
    id /* block */  _saveCompletionBlock;
    bool  _successToReport;
}

@property (nonatomic, readonly) NSError *errorToReport;
@property (nonatomic, readonly) NSArray *itemsToSchedule;
@property (nonatomic, readonly) long long pendingSaveCount;
@property (nonatomic, readonly) id /* block */ saveCompletionBlock;
@property (nonatomic, readonly) bool successToReport;

- (void).cxx_destruct;
- (void)_didCompleteSavingItem:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3;
- (void)_invokeSaveCompletionBlock;
- (void)_noteDidCompleteSavingItem:(id)arg1 error:(id)arg2;
- (void)_saveImage:(id)arg1;
- (void)_saveImageData:(id)arg1;
- (void)_saveVideoAtPath:(id)arg1;
- (void)beginSaving;
- (void)beginSavingItem:(id)arg1;
- (id)errorToReport;
- (id)initWithItems:(id)arg1 saveCompletionBlock:(id /* block */)arg2;
- (id)itemsToSchedule;
- (long long)pendingSaveCount;
- (id /* block */)saveCompletionBlock;
- (bool)successToReport;

@end
