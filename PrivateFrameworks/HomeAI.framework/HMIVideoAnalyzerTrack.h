
@interface HMIVideoAnalyzerTrack : HMFObject {
    NSMutableArray * _analysisTimeStamps;
    NSMutableArray * _blobs;
    NSMutableSet * _eventClasses;
    unsigned long long  _stationaryBlobIndex;
    unsigned long long  _trackIndex;
}

@property (readonly) NSMutableArray *analysisTimeStamps;
@property (readonly) NSMutableArray *blobs;
@property (readonly) NSMutableSet *eventClasses;
@property (readonly) HMIVideoAnalyzerBlob *lastBlob;
@property unsigned long long stationaryBlobIndex;
@property (readonly) unsigned long long trackIndex;

- (void).cxx_destruct;
- (id)analysisTimeStamps;
- (void)appendBlob:(id)arg1;
- (id)blobAtTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)blobs;
- (id)createPackageEventAtTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)eventClasses;
- (id)initWithBlob:(id)arg1 trackIndex:(unsigned long long)arg2;
- (bool)isClassified;
- (bool)isExpiredAtTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)isLostAtTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)isStationaryAtTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)lastBlob;
- (void)setStationaryBlobIndex:(unsigned long long)arg1;
- (id)shortDescription;
- (float)similarityToBlob:(id)arg1;
- (unsigned long long)stationaryBlobIndex;
- (unsigned long long)stationaryIndexToBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)trackIndex;

@end
