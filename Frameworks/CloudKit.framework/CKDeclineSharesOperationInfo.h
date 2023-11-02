
@interface CKDeclineSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _shareMetadatasToDecline;
}

@property (nonatomic, retain) NSArray *shareMetadatasToDecline;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)databaseScope;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShareMetadatasToDecline:(id)arg1;
- (id)shareMetadatasToDecline;

@end
