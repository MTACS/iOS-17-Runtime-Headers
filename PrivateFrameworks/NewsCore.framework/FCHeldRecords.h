
@interface FCHeldRecords : NSObject {
    NSDictionary * _interestTokensByID;
    NSDictionary * _recordsByID;
}

@property (nonatomic, readonly) NSArray *allRecordIDs;
@property (nonatomic, readonly) NSArray *allRecords;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDictionary *interestTokensByID;
@property (nonatomic, readonly) FCInterestToken *onlyInterestToken;
@property (nonatomic, readonly) id onlyRecord;
@property (nonatomic, readonly) NSString *onlyRecordID;
@property (nonatomic, readonly) NSDictionary *recordsByID;

+ (id)heldRecordsByMerging:(id)arg1 with:(id)arg2;

- (void).cxx_destruct;
- (id)allRecordIDs;
- (id)allRecords;
- (unsigned long long)count;
- (void)enumerateRecordsAndInterestTokensInOrder:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateRecordsAndInterestTokensWithBlock:(id /* block */)arg1;
- (id)heldRecordsForIDs:(id)arg1;
- (id)heldRecordsPassingTest:(id /* block */)arg1;
- (id)initWithRecordsByID:(id)arg1 interestTokensByID:(id)arg2;
- (id)interestTokenForID:(id)arg1;
- (id)interestTokensByID;
- (id)onlyInterestToken;
- (id)onlyRecord;
- (id)onlyRecordID;
- (id)recordWithID:(id)arg1;
- (id)recordsByID;
- (id)transformRecordsByIDWithBlock:(id /* block */)arg1;
- (id)transformRecordsInOrder:(id)arg1 withBlock:(id /* block */)arg2;
- (id)transformRecordsWithBlock:(id /* block */)arg1;

@end
