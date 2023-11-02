
@interface PUEditingInitialPayload : NSObject <NSSecureCoding> {
    NSString * _accessibilityDescription;
    long long  _adjustmentBaseVersion;
    PHAdjustmentData * _adjustmentData;
    NSDate * _creationDate;
    NSData * _displaySizeImageData;
    int  _fullSizeImageExifOrientation;
    NSURL * _fullSizeImageURL;
    NSString * _fullSizeImageURLSandboxExtensionToken;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoStillDisplayTime;
    CLLocation * _location;
    unsigned long long  _mediaSubtypes;
    long long  _mediaType;
    NSData * _placeholderImageData;
    long long  _playbackStyle;
    NSString * _uniformTypeIdentifier;
    NSString * _videoPathSandboxExtensionToken;
    NSURL * _videoURL;
}

@property (nonatomic, copy) NSString *accessibilityDescription;
@property (nonatomic) long long adjustmentBaseVersion;
@property (nonatomic, retain) PHAdjustmentData *adjustmentData;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSData *displaySizeImageData;
@property (nonatomic) int fullSizeImageExifOrientation;
@property (nonatomic, retain) NSURL *fullSizeImageURL;
@property (nonatomic, copy) NSString *fullSizeImageURLSandboxExtensionToken;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoStillDisplayTime;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) long long mediaType;
@property (nonatomic, copy) NSData *placeholderImageData;
@property (nonatomic) long long playbackStyle;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;
@property (nonatomic, copy) NSString *videoPathSandboxExtensionToken;
@property (nonatomic, retain) NSURL *videoURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (long long)adjustmentBaseVersion;
- (id)adjustmentData;
- (id)creationDate;
- (id)displaySizeImageData;
- (void)encodeWithCoder:(id)arg1;
- (int)fullSizeImageExifOrientation;
- (id)fullSizeImageURL;
- (id)fullSizeImageURLSandboxExtensionToken;
- (id)initWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoStillDisplayTime;
- (id)location;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)placeholderImageData;
- (long long)playbackStyle;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setAdjustmentBaseVersion:(long long)arg1;
- (void)setAdjustmentData:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplaySizeImageData:(id)arg1;
- (void)setFullSizeImageExifOrientation:(int)arg1;
- (void)setFullSizeImageURL:(id)arg1;
- (void)setFullSizeImageURLSandboxExtensionToken:(id)arg1;
- (void)setLivePhotoStillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLocation:(id)arg1;
- (void)setMediaSubtypes:(unsigned long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setPlaceholderImageData:(id)arg1;
- (void)setPlaybackStyle:(long long)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (void)setVideoPathSandboxExtensionToken:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)uniformTypeIdentifier;
- (id)videoPathSandboxExtensionToken;
- (id)videoURL;

@end
