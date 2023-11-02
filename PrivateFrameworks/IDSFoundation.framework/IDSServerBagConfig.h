
@interface IDSServerBagConfig : NSObject {
    NSString * _apsEnvironmentName;
    long long  _bagType;
    bool  _bypassProcessChecks;
    NSDictionary * _defaultBag;
    NSString * _defaultsDomain;
    BOOL  _hashAlgorithm;
    NSObject<OS_os_log> * _logCategory;
    bool  _requiresIDSHost;
    unsigned long long  _sosDomain;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *apsEnvironmentName;
@property (nonatomic, readonly) long long bagType;
@property (nonatomic, readonly) bool bypassProcessChecks;
@property (nonatomic, readonly) NSDictionary *defaultBag;
@property (nonatomic, readonly) NSString *defaultsDomain;
@property (nonatomic, readonly) BOOL hashAlgorithm;
@property (nonatomic, readonly) NSObject<OS_os_log> *logCategory;
@property (nonatomic, readonly) bool requiresIDSHost;
@property (nonatomic, readonly) unsigned long long sosDomain;
@property (nonatomic, readonly) NSURL *url;

+ (id)IDSConfig;
+ (id)courierConfig;

- (void).cxx_destruct;
- (id)apsEnvironmentName;
- (long long)bagType;
- (bool)bypassProcessChecks;
- (id)debugDescription;
- (id)defaultBag;
- (id)defaultsDomain;
- (id)description;
- (BOOL)hashAlgorithm;
- (id)initWithURL:(id)arg1 defaultsDomain:(id)arg2 defaultBag:(id)arg3 apsEnvironmentName:(id)arg4 sosDomain:(unsigned long long)arg5 hashAlgorithm:(BOOL)arg6 requiresIDSHost:(bool)arg7 bagType:(long long)arg8 bypassProcessChecks:(bool)arg9 logCategory:(id)arg10;
- (id)logCategory;
- (bool)requiresIDSHost;
- (unsigned long long)sosDomain;
- (id)url;

@end
