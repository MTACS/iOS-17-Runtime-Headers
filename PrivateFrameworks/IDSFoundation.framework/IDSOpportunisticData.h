
@interface IDSOpportunisticData : NSObject <NSSecureCoding> {
    NSString * _accountUniqueID;
    NSData * _data;
    NSString * _identifier;
    IDSOpportunisticOptions * _options;
    NSMutableDictionary * _sendCount;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSString *accountUniqueID;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) IDSOpportunisticOptions *options;
@property (nonatomic, retain) NSMutableDictionary *sendCount;
@property (nonatomic, retain) NSString *serviceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountUniqueID;
- (id)copy;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (void)incrementSendCountForDestination:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 identifier:(id)arg2 serviceName:(id)arg3 accountUniqueID:(id)arg4 options:(id)arg5;
- (id)initWithData:(id)arg1 identifier:(id)arg2 serviceName:(id)arg3 accountUniqueID:(id)arg4 options:(id)arg5 sendCount:(id)arg6;
- (bool)isInvalid;
- (void)markInvalid;
- (id)options;
- (id)sendCount;
- (long long)sendCountForURI:(id)arg1;
- (id)serviceName;
- (void)setAccountUniqueID:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setSendCount:(id)arg1;
- (void)setServiceName:(id)arg1;
- (bool)shouldSendToDestination:(id)arg1;

@end
