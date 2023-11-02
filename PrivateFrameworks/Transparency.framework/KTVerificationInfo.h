
@interface KTVerificationInfo : NSObject <NSSecureCoding> {
    NSData * _accountKey;
    NSError * _failure;
    NSDate * _idsResponseTime;
    NSArray * _serverLoggableDatas;
}

@property (retain) NSData *accountKey;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSError *failure;
@property (retain) NSDate *idsResponseTime;
@property (retain) NSArray *serverLoggableDatas;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountKey;
- (id)description;
- (id)diagnosticsJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)failure;
- (id)idsResponseTime;
- (id)initWithAccountKey:(id)arg1;
- (id)initWithAccountKey:(id)arg1 serverLoggableDatas:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serverLoggableDatas;
- (void)setAccountKey:(id)arg1;
- (void)setFailure:(id)arg1;
- (void)setIdsResponseTime:(id)arg1;
- (void)setServerLoggableDatas:(id)arg1;
- (void)updateServerLoggableDatas:(id)arg1;

@end
