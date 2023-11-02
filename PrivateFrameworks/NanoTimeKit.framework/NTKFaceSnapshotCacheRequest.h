
@interface NTKFaceSnapshotCacheRequest : NSObject {
    id /* block */  _completion;
    NSDate * _creationDate;
    NTKFace * _face;
    NSString * _faceSnapshotKey;
    NTKFaceSnapshotCacheRequestOptions * _options;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) NTKFace *face;
@property (nonatomic, readonly, copy) NSString *faceSnapshotKey;
@property (nonatomic, readonly, copy) NTKFaceSnapshotCacheRequestOptions *options;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)creationDate;
- (id)face;
- (id)faceSnapshotKey;
- (id)initWithFace:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)options;
- (void)setCompletion:(id /* block */)arg1;

@end
