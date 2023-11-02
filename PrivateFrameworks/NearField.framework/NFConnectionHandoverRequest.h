
@interface NFConnectionHandoverRequest : NSObject <NSCopying> {
    NSString * _applicationLabel;
    NSNumber * _retryRandom;
    NSArray * _transportServiceList;
    <NFConnectionHandoverTransportServiceValue> * _userInfo;
    NSString * _version;
}

@property (nonatomic, retain) NSString *applicationLabel;
@property (nonatomic, retain) NSNumber *retryRandom;
@property (nonatomic, retain) NSArray *transportServiceList;
@property (nonatomic, retain) <NFConnectionHandoverTransportServiceValue> *userInfo;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)_encodeRequest;
- (id)_encodeRequestRetry;
- (id)applicationLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)encode;
- (id)initWithVersion:(id)arg1 applicationLabel:(id)arg2 serivceList:(id)arg3;
- (id)initWithVersion:(id)arg1 applicationLabel:(id)arg2 serivceList:(id)arg3 userInfo:(id)arg4;
- (id)initWithVersion:(id)arg1 applicationLabel:(id)arg2 serviceList:(id)arg3 userInfo:(id)arg4;
- (id)initWithVersion:(id)arg1 applicationLabel:(id)arg2 serviceList:(id)arg3 userInfo:(id)arg4 retryRandom:(id)arg5;
- (id)retryRandom;
- (void)setApplicationLabel:(id)arg1;
- (void)setRetryRandom:(id)arg1;
- (void)setTransportServiceList:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)transportServiceList;
- (id)userInfo;
- (id)version;

@end
