
@interface AMSMetricsIdentifier : NSObject {
    AMSMetricsIdentifierStore * _store;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) double duration;

+ (void)cleanupIdentifiers;
+ (id)clientIdKey;
+ (void)removeIdentifiersForAccount:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)clientInfo;
- (id)domain;
- (double)duration;
- (id)generateEventFields;
- (id)generateIdentifier;
- (id)init;
- (void)setAccount:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setDuration:(double)arg1;

@end
