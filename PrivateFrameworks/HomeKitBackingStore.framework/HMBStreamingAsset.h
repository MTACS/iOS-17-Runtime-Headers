
@interface HMBStreamingAsset : HMFObject <HMBModelNativeCKWrapper, HMBModelObjectMerging, NSSecureCoding> {
    CKStreamingAsset * _downloadStreamingAsset;
    CKStreamingAsset * _uploadStreamingAsset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKStreamingAsset *downloadStreamingAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKStreamingAsset *uploadStreamingAsset;

+ (void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)downloadStreamingAsset;
- (void)encodeWithCoder:(id)arg1;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;
- (id)hmbObjectByMergingFromObject:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUploadStreamingAsset:(id)arg1;
- (id)initWithUploadStreamingAsset:(id)arg1 downloadStreamingAsset:(id)arg2;
- (id)nativeCKValueWithEncodingContext:(id)arg1 error:(id*)arg2;
- (void)setDownloadStreamingAsset:(id)arg1;
- (void)setUploadStreamingAsset:(id)arg1;
- (id)uploadStreamingAsset;

@end
