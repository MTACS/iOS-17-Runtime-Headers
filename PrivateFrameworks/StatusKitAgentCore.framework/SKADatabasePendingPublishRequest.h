
@interface SKADatabasePendingPublishRequest : NSObject {
    NSDate * _dateCreated;
    NSData * _payloadData;
    long long  _retryCount;
    NSString * _statusTypeIdentifier;
    NSString * _statusUniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSDate *dateCreated;
@property (nonatomic, readonly) NSData *payloadData;
@property (nonatomic, readonly) long long retryCount;
@property (nonatomic, readonly, copy) NSString *statusTypeIdentifier;
@property (nonatomic, readonly, copy) NSString *statusUniqueIdentifier;

- (void).cxx_destruct;
- (id)dateCreated;
- (id)initWithCoreDataPendingPublishRequest:(id)arg1;
- (id)initWithStatusTypeIdentifier:(id)arg1 dateCreated:(id)arg2 payloadData:(id)arg3 statusUniqueIdentifier:(id)arg4 retryCount:(long long)arg5;
- (id)payloadData;
- (long long)retryCount;
- (id)statusTypeIdentifier;
- (id)statusUniqueIdentifier;

@end
