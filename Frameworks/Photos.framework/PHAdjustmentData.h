
@interface PHAdjustmentData : NSObject <NSSecureCoding> {
    long long  _baseVersion;
    NSData * _data;
    NSString * _editorBundleID;
    NSString * _formatIdentifier;
    NSString * _formatVersion;
}

@property (nonatomic) long long baseVersion;
@property (readonly) NSData *data;
@property (nonatomic, copy) NSString *editorBundleID;
@property (nonatomic, copy) NSString *formatIdentifier;
@property (nonatomic, copy) NSString *formatVersion;
@property (getter=isOpaque, readonly) bool opaque;

+ (long long)adjustmentBaseVersionFromImageRequestVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)arg1;
+ (long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (id)opaqueAdjustmentData;
+ (bool)supportsSecureCoding;
+ (long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)arg1;

- (void).cxx_destruct;
- (bool)_contentEditing_containsValidAdjustment;
- (bool)_contentEditing_readableByClientWithVerificationBlock:(id /* block */)arg1;
- (long long)_contentEditing_requiredBaseVersionReadableByClient:(bool*)arg1 verificationBlock:(id /* block */)arg2;
- (bool)_hasAdjustments;
- (long long)baseVersion;
- (id)data;
- (id)description;
- (id)editorBundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)formatIdentifier;
- (id)formatVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3;
- (bool)isOpaque;
- (void)setBaseVersion:(long long)arg1;
- (void)setEditorBundleID:(id)arg1;
- (void)setFormatIdentifier:(id)arg1;
- (void)setFormatVersion:(id)arg1;

@end
