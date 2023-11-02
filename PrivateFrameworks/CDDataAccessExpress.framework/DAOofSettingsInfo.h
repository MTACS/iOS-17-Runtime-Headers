
@interface DAOofSettingsInfo : DAOofParams {
    <DAOofResponseDelegate> * _consumer;
    NSString * _requestID;
}

@property (nonatomic) <DAOofResponseDelegate> *consumer;
@property (nonatomic, retain) NSString *requestID;

- (void).cxx_destruct;
- (id)consumer;
- (id)requestID;
- (void)setConsumer:(id)arg1;
- (void)setRequestID:(id)arg1;

@end
