
@interface PXAudioRequestOptions : NSObject <NSCopying> {
    <PXAudioAssetEntryPoint> * _entryPoint;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _fadeOutDuration;
    long long  _intent;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maximumDuration;
    bool  _networkAccessAllowed;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _preferredDuration;
}

@property (nonatomic, retain) <PXAudioAssetEntryPoint> *entryPoint;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } fadeOutDuration;
@property (nonatomic) long long intent;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maximumDuration;
@property (nonatomic) bool networkAccessAllowed;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredDuration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entryPoint;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fadeOutDuration;
- (unsigned long long)hash;
- (id)init;
- (long long)intent;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDuration;
- (bool)networkAccessAllowed;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredDuration;
- (void)setEntryPoint:(id)arg1;
- (void)setFadeOutDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIntent:(long long)arg1;
- (void)setMaximumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setPreferredDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
