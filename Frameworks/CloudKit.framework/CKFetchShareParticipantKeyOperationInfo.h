
@interface CKFetchShareParticipantKeyOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSDictionary * _baseTokensByShareID;
    NSDictionary * _childRecordIDsByShareID;
    NSArray * _shareIDs;
}

@property (nonatomic, retain) NSDictionary *baseTokensByShareID;
@property (nonatomic, retain) NSDictionary *childRecordIDsByShareID;
@property (nonatomic, retain) NSArray *shareIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseTokensByShareID;
- (id)childRecordIDsByShareID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBaseTokensByShareID:(id)arg1;
- (void)setChildRecordIDsByShareID:(id)arg1;
- (void)setShareIDs:(id)arg1;
- (id)shareIDs;

@end
