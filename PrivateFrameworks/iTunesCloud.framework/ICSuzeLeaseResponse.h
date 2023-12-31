
@interface ICSuzeLeaseResponse : NSObject {
    NSDate * _requestDate;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, copy) NSData *clientData;
@property (nonatomic, readonly, copy) NSDate *leaseExpirationDate;

- (void).cxx_destruct;
- (id)clientData;
- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2;
- (id)leaseExpirationDate;

@end
