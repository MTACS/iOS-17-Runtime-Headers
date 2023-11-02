
@interface PRSFocusPosterSnapshotRequest : NSObject {
    long long  _configurationType;
    NSString * _focusModeUUID;
    double  _imageScaleRelativeToScreen;
    unsigned long long  _maxCount;
    unsigned long long  _options;
    long long  _orientation;
    long long  _variant;
}

@property (nonatomic, readonly) long long configurationType;
@property (nonatomic, readonly, copy) NSString *focusModeUUID;
@property (nonatomic, readonly) double imageScaleRelativeToScreen;
@property (nonatomic, readonly) unsigned long long maxCount;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) long long variant;

- (void).cxx_destruct;
- (long long)configurationType;
- (id)focusModeUUID;
- (double)imageScaleRelativeToScreen;
- (id)init;
- (id)initWithFocusModeUUID:(id)arg1 configurationType:(long long)arg2 variant:(long long)arg3 options:(unsigned long long)arg4 imageScaleRelativeToScreen:(double)arg5 maxCount:(unsigned long long)arg6;
- (id)initWithFocusModeUUID:(id)arg1 configurationType:(long long)arg2 variant:(long long)arg3 options:(unsigned long long)arg4 imageScaleRelativeToScreen:(double)arg5 orientation:(long long)arg6 maxCount:(unsigned long long)arg7;
- (id)initWithFocusModeUUID:(id)arg1 configurationType:(long long)arg2 variant:(long long)arg3 options:(unsigned long long)arg4 maxCount:(unsigned long long)arg5;
- (id)initWithFocusModeUUID:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)initWithPosterRequest:(id)arg1;
- (unsigned long long)maxCount;
- (unsigned long long)options;
- (long long)orientation;
- (void)setImageScaleRelativeToScreen:(double)arg1;
- (long long)variant;

@end
