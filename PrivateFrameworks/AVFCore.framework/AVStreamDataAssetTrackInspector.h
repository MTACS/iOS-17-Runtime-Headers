
@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {
    int  _trackID;
    AVWeakReference * _weakReferenceToAsset;
}

- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })dimensions;
- (unsigned int)figMediaType;
- (id)formatDescriptions;
- (bool)isEnabled;
- (id)mediaCharacteristics;
- (id)mediaType;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (int)trackID;

@end
