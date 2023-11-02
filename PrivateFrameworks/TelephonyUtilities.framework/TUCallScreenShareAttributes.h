
@interface TUCallScreenShareAttributes : NSObject <TUScreenShareAttributes> {
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

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceFamily;
@property (nonatomic, retain) NSNumber *displayID;
@property (nonatomic, retain) NSNumber *displayScale;
@property (nonatomic, retain) NSNumber *frameRate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSValue *originalResolution;
@property (nonatomic, retain) NSNumber *scaleFactor;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *windowUUID;
@property (getter=isWindowed, nonatomic) bool windowed;

+ (long long)currentDeviceFamily;
+ (id)defaultAttributes;
+ (id)defaultDisplayScale;
+ (id)defaultScaleFactor;
+ (id)originalResolutionWithContentScale:(id)arg1 contentRect:(id)arg2 displayScale:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (long long)deviceFamily;
- (id)displayID;
- (id)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (id)frameRate;
- (unsigned long long)hash;
- (id)initWithAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScreenShareAttributes:(id)arg1;
- (bool)isSignificantChangeFromAttributes:(id)arg1;
- (bool)isWindowed;
- (id)originalResolution;
- (id)scaleFactor;
- (void)setDeviceFamily:(long long)arg1;
- (void)setDisplayID:(id)arg1;
- (void)setDisplayScale:(id)arg1;
- (void)setFrameRate:(id)arg1;
- (void)setOriginalResolution:(id)arg1;
- (void)setResolutionAttributesWithContentScale:(id)arg1 contentRect:(id)arg2 displayScale:(id)arg3;
- (void)setScaleFactor:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setWindowUUID:(id)arg1;
- (void)setWindowed:(bool)arg1;
- (long long)style;
- (id)windowUUID;

@end
