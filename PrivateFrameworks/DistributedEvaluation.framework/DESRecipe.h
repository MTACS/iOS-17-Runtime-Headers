
@interface DESRecipe : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _attachmentPaths;
    NSArray * _attachmentSignatures;
    NSArray * _attachments;
    NSString * _bundleIdentifier;
    NSData * _certificate;
    NSDictionary * _parametersUsed;
    NSDictionary * _predicate;
    NSString * _recipeID;
    NSDictionary * _recipeUserInfo;
}

@property (nonatomic, copy) NSArray *attachmentPaths;
@property (nonatomic, copy) NSArray *attachmentSignatures;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSData *certificate;
@property (nonatomic, readonly) NSNumber *maxNorm;
@property (nonatomic, readonly) NSNumber *normBinCount;
@property (nonatomic, readonly, copy) NSDictionary *parametersUsed;
@property (nonatomic, readonly) bool pluginShouldAddNoiseAndEncryptResult;
@property (nonatomic, readonly) NSDictionary *predicate;
@property (nonatomic, readonly) NSString *privacyIdentifier;
@property (nonatomic, readonly) NSString *privacyIdentifierExt;
@property (nonatomic, copy) NSString *recipeID;
@property (nonatomic, readonly, copy) NSDictionary *recipeUserInfo;
@property (nonatomic, readonly) bool transportIsDedisco;
@property (nonatomic, readonly) bool useAdaptiveClipping;
@property (nonatomic, readonly) bool useAggregatableMetadata;
@property (nonatomic, readonly) bool useSparsification;

+ (bool)_hasValidClippingBounds:(id)arg1 matchValidNumChunks:(id)arg2;
+ (bool)pluginShouldAddNoiseAndEncryptResult:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)transportIsDedisco:(id)arg1;
+ (bool)useAdaptiveClipping:(id)arg1;
+ (bool)useAggregatableMetadata:(id)arg1;
+ (bool)useSparsification:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithAssetURL:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (id)_initWithRecipeResponse:(id)arg1 recipeID:(id)arg2 bundleIdentifier:(id)arg3 error:(id*)arg4;
- (id)_initWithRecipeUserInfo:(id)arg1 recipeID:(id)arg2 bundleIdentifier:(id)arg3;
- (id)_initWithRecipeUserInfo:(id)arg1 recipeID:(id)arg2 bundleIdentifier:(id)arg3 predicate:(id)arg4;
- (id)_initWithRecipeUserInfo:(id)arg1 recipeID:(id)arg2 bundleIdentifier:(id)arg3 predicate:(id)arg4 attachments:(id)arg5;
- (id)_inithWithContentsOfFile:(id)arg1 recipeID:(id)arg2 bundleIdentifier:(id)arg3 error:(id*)arg4;
- (id)attachmentPaths;
- (id)attachmentSignatures;
- (id)attachments;
- (id)bundleIdentifier;
- (id)certificate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)haruspexKeyWithError:(id*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)maxNorm;
- (id)normBinCount;
- (id)parametersUsed;
- (bool)pluginShouldAddNoiseAndEncryptResult;
- (id)predicate;
- (id)privacyIdentifier;
- (id)privacyIdentifierExt;
- (id)recipeID;
- (id)recipeUserInfo;
- (void)setAttachmentPaths:(id)arg1;
- (void)setAttachmentSignatures:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setRecipeID:(id)arg1;
- (bool)transportIsDedisco;
- (bool)useAdaptiveClipping;
- (bool)useAggregatableMetadata;
- (bool)useSparsification;

@end
