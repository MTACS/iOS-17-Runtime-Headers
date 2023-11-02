
@interface CXScreenShareAttributes : NSObject <NSSecureCoding> {
    long long  _deviceFamily;
    NSNumber * _displayID;
    NSNumber * _displayScale;
    NSNumber * _frameRate;
    NSValue * _originalResolution;
    NSNumber * _scaleFactor;
    long long  _style;
    NSUUID * _windowUUID;
    bool  _windowed;
}

@property (nonatomic) long long deviceFamily;
@property (nonatomic, retain) NSNumber *displayID;
@property (nonatomic, retain) NSNumber *displayScale;
@property (nonatomic, retain) NSNumber *frameRate;
@property (nonatomic, copy) NSValue *originalResolution;
@property (nonatomic, retain) NSNumber *scaleFactor;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSUUID *windowUUID;
@property (getter=isWindowed, nonatomic) bool windowed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDescription;
- (long long)deviceFamily;
- (id)displayID;
- (id)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (id)frameRate;
- (id)initWithCoder:(id)arg1;
- (bool)isWindowed;
- (id)originalResolution;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (id)scaleFactor;
- (void)setDeviceFamily:(long long)arg1;
- (void)setDisplayID:(id)arg1;
- (void)setDisplayScale:(id)arg1;
- (void)setFrameRate:(id)arg1;
- (void)setOriginalResolution:(id)arg1;
- (void)setScaleFactor:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setWindowUUID:(id)arg1;
- (void)setWindowed:(bool)arg1;
- (long long)style;
- (id)windowUUID;

@end
