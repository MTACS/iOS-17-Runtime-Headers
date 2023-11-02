
@interface SBDisplayScaleMapping : NSObject {
    NSString * _displayHardwareIdentifier;
    NSDictionary * _displayScaleToLogicalScale;
    double  _nativePPI;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    unsigned long long  _scaleMethod;
    unsigned long long  _supportedScales;
}

@property (nonatomic, readonly, copy) NSString *displayHardwareIdentifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, readonly) unsigned long long supportedScales;

+ (id)withDisplay:(id)arg1 useNativeSize:(bool)arg2;

- (void).cxx_destruct;
- (unsigned long long)_defaultScale;
- (id)createDefaultSettings;
- (id)description;
- (id)displayHardwareIdentifier;
- (id)initWithDisplayHardwareIdentifier:(id)arg1 nativePPI:(double)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3 scaleMethod:(unsigned long long)arg4 supportedScales:(unsigned long long)arg5 displayScaleToLogicalScale:(id)arg6;
- (double)logicalScaleForDisplayScale:(unsigned long long)arg1;
- (double)ppiForDisplayScale:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })referenceSize;
- (unsigned long long)supportedScales;

@end
