
@interface PXPersonItem : NSObject {
    NSUUID * _cellUUID;
    UIImage * _faceImage;
    id /* block */  _faceImageLoadingCompletionBlock;
    int  _faceImageRequestID;
    id /* block */  _fastDisplayBlock;
    PHPerson * _modelObject;
    id /* block */  _resultHandler;
}

@property (nonatomic, copy) NSUUID *cellUUID;
@property UIImage *faceImage;
@property (copy) id /* block */ faceImageLoadingCompletionBlock;
@property int faceImageRequestID;
@property (copy) id /* block */ fastDisplayBlock;
@property (nonatomic, retain) PHPerson *modelObject;
@property (copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)cellUUID;
- (id)faceImage;
- (id /* block */)faceImageLoadingCompletionBlock;
- (int)faceImageRequestID;
- (id /* block */)fastDisplayBlock;
- (id)initWithPerson:(id)arg1;
- (id)modelObject;
- (id /* block */)resultHandler;
- (void)setCellUUID:(id)arg1;
- (void)setFaceImage:(id)arg1;
- (void)setFaceImageLoadingCompletionBlock:(id /* block */)arg1;
- (void)setFaceImageRequestID:(int)arg1;
- (void)setFastDisplayBlock:(id /* block */)arg1;
- (void)setModelObject:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)updateWithModel:(id)arg1;

@end
