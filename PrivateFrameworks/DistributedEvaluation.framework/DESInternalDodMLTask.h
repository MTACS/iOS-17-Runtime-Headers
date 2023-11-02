
@interface DESInternalDodMLTask : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _baseURL;
    NSString * _localeIdentifier;
    DESRecordSet * _matchingRecordSet;
    DESRecipe * _recipe;
    NSString * _testingRecipePath;
    DESUploadTransport * _uploadTransport;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic, readonly) DESRecordSet *matchingRecordSet;
@property (nonatomic, readonly) DESRecipe *recipe;
@property (nonatomic, readonly) NSString *testingRecipePath;
@property (nonatomic, readonly) DESUploadTransport *uploadTransport;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipe:(id)arg1 matchingRecordSet:(id)arg2 baseURL:(id)arg3 localIdentifier:(id)arg4 recipePath:(id)arg5 uploadTransport:(id)arg6;
- (id)localeIdentifier;
- (id)matchingRecordSet;
- (id)recipe;
- (id)testingRecipePath;
- (id)uploadTransport;

@end
