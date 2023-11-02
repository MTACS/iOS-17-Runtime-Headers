
@interface VisionCoreSparseOpticalFlowResult : NSObject {
    NSArray * _dstPts;
    NSArray * _srcPts;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *dstPts;
@property (nonatomic, readonly, copy) NSArray *srcPts;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)dstPts;
- (id)initWithQuadUUID:(id)arg1 srcKeypoints:(id)arg2 dstKeypoints:(id)arg3;
- (id)srcPts;
- (id)uuid;

@end
