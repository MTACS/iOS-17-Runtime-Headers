
@interface NTKFaceSnapshotRequest : NSObject {
    id /* block */  _completion;
    NSDate * _creationDate;
    NTKFace * _face;
    NSDictionary * _options;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) NTKFace *face;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (getter=isReady, nonatomic, readonly) bool ready;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)creationDate;
- (id)face;
- (id)initWithFace:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (bool)isReady;
- (id)options;
- (void)setCompletion:(id /* block */)arg1;

@end
