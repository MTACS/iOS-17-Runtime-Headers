
@interface CKDFetchArchivedRecordsRequestOperationResult : NSObject {
    NSData * _resultServerChangeTokenData;
    long long  _status;
}

@property (nonatomic, retain) NSData *resultServerChangeTokenData;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (id)init;
- (id)resultServerChangeTokenData;
- (void)setResultServerChangeTokenData:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
