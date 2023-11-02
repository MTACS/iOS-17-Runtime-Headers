
@interface TRIAssetDiffArtifact : NSObject <NSCopying> {
    NSString<TRIAssetId> * _destAssetId;
    NSURL * _diff;
    NSString * _diffSignature;
    long long  _diffSize;
    NSData * _publicCertificate;
    NSString<TRIAssetId> * _sourceAssetId;
}

@property (nonatomic, readonly) NSString<TRIAssetId> *destAssetId;
@property (nonatomic, readonly) NSURL *diff;
@property (nonatomic, readonly) NSString *diffSignature;
@property (nonatomic, readonly) long long diffSize;
@property (nonatomic, readonly) NSData *publicCertificate;
@property (nonatomic, readonly) NSString<TRIAssetId> *sourceAssetId;

+ (bool)_signature:(id)arg1 onFileURL:(id)arg2 fromCloudKitRecordId:(id)arg3 isValidUsingPublicCertificate:(id)arg4;
+ (id)allReferencedCKRecordKeys;
+ (id)artifactFromCKRecord:(id)arg1;
+ (id)artifactWithSourceAssetId:(id)arg1 destAssetId:(id)arg2 diffSignature:(id)arg3 diff:(id)arg4 diffSize:(long long)arg5 publicCertificate:(id)arg6;

- (void).cxx_destruct;
- (id)copyWithReplacementDestAssetId:(id)arg1;
- (id)copyWithReplacementDiff:(id)arg1;
- (id)copyWithReplacementDiffSignature:(id)arg1;
- (id)copyWithReplacementDiffSize:(long long)arg1;
- (id)copyWithReplacementPublicCertificate:(id)arg1;
- (id)copyWithReplacementSourceAssetId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destAssetId;
- (id)diff;
- (id)diffSignature;
- (long long)diffSize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSourceAssetId:(id)arg1 destAssetId:(id)arg2 diffSignature:(id)arg3 diff:(id)arg4 diffSize:(long long)arg5 publicCertificate:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArtifact:(id)arg1;
- (id)publicCertificate;
- (id)sourceAssetId;

@end
