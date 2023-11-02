
@interface PTCinematographyStreamOptions : NSObject <NSCopying, NSMutableCopying> {
    NSDictionary * _cinematographyParameters;
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedFocusNormalizedRectSize;
    bool  _overrideFrameSnapshotPolicy;
    unsigned long long  _snapshotPolicy;
    unsigned long long  _version;
}

@property (setter=_setOverrideFrameSnapshotPolicy:, nonatomic) bool _overrideFrameSnapshotPolicy;
@property (setter=_setSnapshotPolicy:, nonatomic) unsigned long long _snapshotPolicy;
@property (copy) NSDictionary *cinematographyParameters;
@property struct CGSize { double x1; double x2; } fixedFocusNormalizedRectSize;
@property unsigned long long version;

- (void).cxx_destruct;
- (bool)_overrideFrameSnapshotPolicy;
- (void)_setOverrideFrameSnapshotPolicy:(bool)arg1;
- (void)_setSnapshotPolicy:(unsigned long long)arg1;
- (unsigned long long)_snapshotPolicy;
- (id)cinematographyParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })fixedFocusNormalizedRectSize;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCinematographyParameters:(id)arg1;
- (void)setFixedFocusNormalizedRectSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
