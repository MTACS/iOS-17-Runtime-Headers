
@interface SBSConnectedDisplayInfo : NSObject <NSSecureCoding> {
    SBSRelativeDisplayArrangement * _arrangement;
    NSString * _deviceName;
    SBSDisplayModeSettings * _displayModeSettings;
    NSString * _displayName;
    NSString * _identifier;
    bool  _mirrored;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _supportedScales;
}

@property (nonatomic, readonly) SBSRelativeDisplayArrangement *arrangement;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly) SBSDisplayModeSettings *displayModeSettings;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isMirrored, nonatomic, readonly) bool mirrored;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned long long supportedScales;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrangement;
- (id)description;
- (id)deviceName;
- (id)displayModeSettings;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 deviceName:(id)arg2 displayName:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 mirrored:(bool)arg5 supportedScales:(unsigned long long)arg6 displayModeSettings:(id)arg7 arrangement:(id)arg8;
- (bool)isMirrored;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)supportedScales;

@end
