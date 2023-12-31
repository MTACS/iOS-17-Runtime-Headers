
@interface PKPaymentHeroImage : NSObject {
    long long  _cardType;
    long long  _credentialType;
    NSString * _identifier;
    NSData * _imageData;
    PKPaymentHeroImageSet * _images;
    bool  _isBeta;
    NSArray * _requiredDeviceFeatures;
    PKOSVersionRequirementRange * _versionRequirement;
}

@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly) long long credentialType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isBeta;
@property (nonatomic, readonly) NSArray *requiredDeviceFeatures;
@property (nonatomic, readonly) PKOSVersionRequirementRange *versionRequirement;

- (void).cxx_destruct;
- (id)URLForImageWithScale:(double)arg1;
- (long long)cardType;
- (long long)credentialType;
- (void)downloadImageForPreferredLanguages:(id)arg1 scale:(double)arg2 fileDownloader:(id)arg3 completion:(id /* block */)arg4;
- (void)downloadImageWithScale:(double)arg1 fileDownloader:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasCachedImageWithScale:(double)arg1;
- (id)identifier;
- (id)imageFilePathForImageModel:(id)arg1;
- (id)imageFilePathOnDiskForPreferredLanguages:(id)arg1 scale:(double)arg2;
- (id)imageForPreferredLanguages:(id)arg1 scale:(double)arg2;
- (id)imageWithScale:(double)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 imageData:(id)arg2 credentialType:(long long)arg3;
- (id)initWithLegacyDictionary:(id)arg1 identifier:(id)arg2;
- (bool)isBeta;
- (bool)isSupportedByDevice:(id)arg1;
- (id)requiredDeviceFeatures;
- (id)versionRequirement;

@end
