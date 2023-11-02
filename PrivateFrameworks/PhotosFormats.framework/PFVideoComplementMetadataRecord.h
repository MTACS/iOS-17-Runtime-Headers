
@interface PFVideoComplementMetadataRecord : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _imageDisplayTime;
    NSString * _pairingIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoDuration;
}

@property (readonly) bool hasValidImageDisplayTime;
@property (readonly) bool hasValidPairingIdentifier;
@property (readonly) bool hasValidVideoDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } imageDisplayTime;
@property (copy) NSString *pairingIdentifier;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoDuration;

- (void).cxx_destruct;
- (bool)hasValidImageDisplayTime;
- (bool)hasValidPairingIdentifier;
- (bool)hasValidVideoDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })imageDisplayTime;
- (id)pairingIdentifier;
- (void)setImageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setVideoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoDuration;

@end
