
@interface CKAcceptSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _shareMetadatasToAccept;
}

@property (nonatomic, retain) NSArray *shareMetadatasToAccept;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)databaseScope;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShareMetadatasToAccept:(id)arg1;
- (id)shareMetadatasToAccept;

@end
