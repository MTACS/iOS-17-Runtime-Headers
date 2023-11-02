
@interface PLDeferredPhotoPendingAssetRecord : NSObject {
    NSManagedObjectID * _assetObjectID;
    id /* block */  _completionHandler;
    bool  _expectsSecondProcessingCallback;
    NSURL * _fileURLForFullsizeRenderImage;
    bool  _isBackgroundPriority;
    NSString * _logDescription;
    PLLibraryServicesManager * _lsm;
    NSURL * _mainFileURL;
    bool  _needsSemanticDevelopment;
    NSString * _requestReason;
    unsigned long long  _signpostId;
    double  _startTimestamp;
}

@property (readonly, copy) NSManagedObjectID *assetObjectID;
@property (readonly, copy) id /* block */ completionHandler;
@property (readonly) bool expectsSecondProcessingCallback;
@property (readonly, copy) NSURL *fileURLForFullsizeRenderImage;
@property (readonly) bool isBackgroundPriority;
@property (readonly, copy) NSString *logDescription;
@property (readonly) PLLibraryServicesManager *lsm;
@property (readonly, copy) NSURL *mainFileURL;
@property (readonly) bool needsSemanticDevelopment;
@property (readonly, copy) NSString *requestReason;
@property (readonly) unsigned long long signpostId;
@property (readonly) double startTimestamp;

- (void).cxx_destruct;
- (id)assetObjectID;
- (id /* block */)completionHandler;
- (bool)expectsSecondProcessingCallback;
- (id)fileURLForFullsizeRenderImage;
- (id)initWithAssetObjectID:(id)arg1 lsm:(id)arg2 requestReason:(id)arg3 isBackgroundPriority:(bool)arg4 signpostId:(unsigned long long)arg5 expectsSecondProcessingCallback:(bool)arg6 needsSemanticDevelopment:(bool)arg7 fileURLForFullsizeRenderImage:(id)arg8 mainFileURL:(id)arg9 logDescription:(id)arg10 startTimestamp:(double)arg11 completionHandler:(id /* block */)arg12;
- (bool)isBackgroundPriority;
- (id)logDescription;
- (id)lsm;
- (id)mainFileURL;
- (bool)needsSemanticDevelopment;
- (id)requestReason;
- (unsigned long long)signpostId;
- (double)startTimestamp;

@end
