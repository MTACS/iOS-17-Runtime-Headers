
@interface CLSAsset : CLSAbstractAsset <CLSAssetUploadObservable, CLSAssetUploadProgressNotifiable, CLSRelationable> {
    NSURL * _devModeURL;
    double  _fractionUploaded;
    bool  _staged;
    NSError * _uploadError;
    NSMutableSet * _uploadObservers;
    bool  _uploadRequested;
    bool  _uploaded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *devModeURL;
@property (nonatomic) long long displayOrder;
@property (nonatomic) double durationInSeconds;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic) double fractionUploaded;
@property (readonly) unsigned long long hash;
@property (getter=isStaged, nonatomic) bool staged;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *thumbnailURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSError *uploadError;
@property (getter=isUploaded, nonatomic) bool uploaded;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_init;
- (void)addUploadObserver:(id)arg1;
- (void)checkForCKShare:(id /* block */)arg1;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_uploadCompleted:(bool)arg1 url:(id)arg2 thumbnailURL:(id)arg3 relativePathWithinContainer:(id)arg4 ubiquitousContainerName:(id)arg5 brItemID:(id)arg6 brOwnerName:(id)arg7 brZoneName:(id)arg8 brShareName:(id)arg9 fractionUploaded:(double)arg10 isTemporary:(bool)arg11 isStaged:(bool)arg12 error:(id)arg13;
- (oneway void)clientRemote_uploadProgressFraction:(double)arg1 error:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createShareIfNeeded:(id /* block */)arg1;
- (void)createShareIfNeeded_Imp:(id /* block */)arg1;
- (bool)deleteFile:(id*)arg1;
- (void)deleteFileWithCompletion:(id /* block */)arg1;
- (id)devModeURL;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (double)fractionUploaded;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 withOwnerPersonID:(id)arg2;
- (id)initWithURL:(id)arg1 ownerPersonID:(id)arg2 type:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isStaged;
- (bool)isUploaded;
- (void)mergeWithObject:(id)arg1;
- (void)queued_notifyUploadCompletion;
- (void)queued_notifyUploadProgress;
- (bool)queued_uploadFileIfNeeded:(id*)arg1;
- (void)removeUploadObserver:(id)arg1;
- (void)setDevModeURL:(id)arg1;
- (void)setFractionUploaded:(double)arg1;
- (void)setStaged:(bool)arg1;
- (void)setUploadError:(id)arg1;
- (void)setUploaded:(bool)arg1;
- (id)uploadError;
- (id)uploadFileIfNeeded:(id*)arg1;
- (id)uploadObservers;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)arg1;
- (void)urlSuitableForStreamingWithCompletion:(id /* block */)arg1;
- (bool)validateObject:(id*)arg1;
- (void)willSaveObject;

@end
