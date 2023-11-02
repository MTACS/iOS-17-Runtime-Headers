
@interface SBApplicationLaunchImageParameters : NSObject {
    NSString * _defaultPNGName;
    NSString * _extension;
    long long  _interfaceOrientation;
    NSString * _minOSVersionString;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly, copy) NSString *defaultPNGName;
@property (nonatomic, readonly, copy) NSString *extension;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly, copy) NSString *minOSVersionString;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)launchImageParametersFromLaunchImagesInfo:(id)arg1 withBundleIdentifier:(id)arg2 isMonarchLinked:(bool)arg3;
+ (id)validInfoPlistOrientationKeys;

- (void).cxx_destruct;
- (id)defaultPNGName;
- (id)description;
- (id)extension;
- (unsigned long long)hash;
- (id)init;
- (long long)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (id)minOSVersionString;
- (struct CGSize { double x1; double x2; })size;

@end
