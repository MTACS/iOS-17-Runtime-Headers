
@interface CLSAssetUploadObserver : NSObject {
    CLSAsset * _asset;
    id /* block */  _onUploadComplete;
    id /* block */  _onUploadProgress;
    bool  _uploaded;
    NSError * uploadError;
    double  uploadProgress;
}

@property (nonatomic, retain) CLSAsset *asset;
@property (nonatomic, copy) id /* block */ onUploadComplete;
@property (nonatomic, copy) id /* block */ onUploadProgress;
@property (readonly) NSError *uploadError;
@property (readonly) double uploadProgress;
@property (getter=isUploaded, nonatomic) bool uploaded;

- (void).cxx_destruct;
- (id)asset;
- (id)initWithAsset:(id)arg1;
- (bool)isUploaded;
- (id /* block */)onUploadComplete;
- (id /* block */)onUploadProgress;
- (void)setAsset:(id)arg1;
- (void)setOnUploadComplete:(id /* block */)arg1;
- (void)setOnUploadProgress:(id /* block */)arg1;
- (void)setUploaded:(bool)arg1;
- (void)startObserving;
- (void)stopObserving;
- (id)uploadError;
- (double)uploadProgress;

@end
