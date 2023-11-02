
@protocol APMetricProtocol <NSObject, NSCopying, NSSecureCoding>

@required

- (bool)areNetworkDates;
- (NSString *)bundleIdentifier;
- (NSString *)clientIdentifier;
- (NSString *)contentIdentifier;
- (NSString *)contextIdentifier;
- (NSString *)deviceIdentifier;
- (NSString *)deviceModel;
- (NSString *)identifier;
- (<APMetricProtocol> *)initWithPurpose:(long long)arg1 metric:(long long)arg2 contentIdentifier:(NSString *)arg3 contextIdentifier:(NSString *)arg4 identifier:(NSString *)arg5 branches:(NSArray *)arg6 properties:(NSDictionary *)arg7 internalProperties:(NSDictionary *)arg8 relayData:(NSDictionary *)arg9 environment:(NSArray *)arg10 order:(long long)arg11 options:(long long)arg12;
- (NSDictionary *)internalProperties;
- (long long)metric;
- (long long)options;
- (NSString *)os;
- (NSString *)osBuild;
- (NSString *)osVersion;
- (NSDictionary *)properties;
- (long long)purpose;
- (NSDate *)timestamp;
- (NSString *)userIdentifier;

@optional

- (void)addInternalPropertyValue:(id <NSSecureCoding>)arg1 forKey:(NSString *)arg2;
- (NSArray *)branches;
- (NSArray *)environment;
- (NSString *)handle;
- (long long)order;
- (NSDictionary *)relayData;
- (void)setBranches:(NSArray *)arg1;
- (void)setEnvironment:(NSArray *)arg1;
- (void)setHandle:(NSString *)arg1;
- (void)setSource:(unsigned int)arg1;
- (void)setTrace:(NSString *)arg1;
- (unsigned int)source;
- (NSString *)trace;
- (void)updatePurpose:(long long)arg1;

@end
