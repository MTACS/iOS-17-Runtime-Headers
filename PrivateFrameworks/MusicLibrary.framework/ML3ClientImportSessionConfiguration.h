
@interface ML3ClientImportSessionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowAccountMerging;
    NSString * _libraryPath;
    unsigned long long  _operationCount;
    ML3DatabasePrivacyContext * _privacyContext;
    int  _sourceType;
}

@property (nonatomic) bool allowAccountMerging;
@property (nonatomic, copy) NSString *libraryPath;
@property (nonatomic) unsigned long long operationCount;
@property (nonatomic) ML3DatabasePrivacyContext *privacyContext;
@property (nonatomic) int sourceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowAccountMerging;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)libraryPath;
- (unsigned long long)operationCount;
- (id)privacyContext;
- (void)setAllowAccountMerging:(bool)arg1;
- (void)setLibraryPath:(id)arg1;
- (void)setOperationCount:(unsigned long long)arg1;
- (void)setPrivacyContext:(id)arg1;
- (void)setSourceType:(int)arg1;
- (int)sourceType;

@end
