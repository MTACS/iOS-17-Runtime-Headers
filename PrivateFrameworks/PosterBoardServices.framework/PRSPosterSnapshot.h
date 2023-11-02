
@interface PRSPosterSnapshot : NSObject <BSXPCSecureCoding> {
    PRSCodableImage * _codableImage;
    long long  _configurationType;
    PRSServerPosterPath * _homeScreenConfigurationPath;
    long long  _imageOrientation;
    PRSServerPosterPath * _switcherConfigurationPath;
    long long  _variant;
}

@property (nonatomic, readonly) PRSCodableImage *codableImage;
@property (nonatomic, readonly) long long configurationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSServerPosterPath *homeScreenConfigurationPath;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) long long imageOrientation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IOSurface *surface;
@property (nonatomic, readonly) PRSServerPosterPath *switcherConfigurationPath;
@property (nonatomic, readonly) long long variant;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)codableImage;
- (long long)configurationType;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)homeScreenConfigurationPath;
- (struct CGImage { }*)image;
- (long long)imageOrientation;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCodableImage:(id)arg1;
- (id)initWithCodableImage:(id)arg1 imageOrientation:(long long)arg2 switcherConfigurationPath:(id)arg3 homeScreenConfigurationPath:(id)arg4 variant:(long long)arg5 configurationType:(long long)arg6;
- (id)initWithIOSurface:(id)arg1;
- (id)initWithIOSurface:(id)arg1 imageOrientation:(long long)arg2 switcherConfigurationPath:(id)arg3 homeScreenConfigurationPath:(id)arg4 variant:(long long)arg5 configurationType:(long long)arg6;
- (id)surface;
- (id)switcherConfigurationPath;
- (long long)variant;

@end
