
@interface PTAssetReaderCompositionInstruction : NSObject <AVVideoCompositionInstruction> {
    PTAssetReader * _assetReader;
    int  _auxvTrackID;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    int  _videTrackID;
}

@property (nonatomic) PTAssetReader *assetReader;
@property (nonatomic) int auxvTrackID;
@property (nonatomic, readonly) bool containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enablePostProcessing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int passthroughTrackID;
@property (nonatomic, readonly) NSArray *requiredSourceSampleDataTrackIDs;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (readonly) Class superclass;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic) int videTrackID;

- (void).cxx_destruct;
- (id)assetReader;
- (int)auxvTrackID;
- (bool)containsTweening;
- (bool)enablePostProcessing;
- (int)passthroughTrackID;
- (id)requiredSourceTrackIDs;
- (void)setAssetReader:(id)arg1;
- (void)setAuxvTrackID:(int)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVideTrackID:(int)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (int)videTrackID;

@end
