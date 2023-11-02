
@interface PBFPosterSnapshotContainer : NSObject {
    struct CGImageBlockSet { } * _imageBlockSet;
    PRSPosterSnapshot * _posterSnapshot;
}

@property (nonatomic, readonly) PRSPosterSnapshot *posterSnapshot;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPosterSnapshot:(id)arg1 imageBlockSet:(struct CGImageBlockSet { }*)arg2;
- (id)posterSnapshot;

@end
