
@interface WFWordPressAccount : WFPasswordAccount {
    NSURL * _endpointURL;
}

@property (nonatomic, copy) NSURL *endpointURL;

+ (id)accountWithUsername:(id)arg1 password:(id)arg2 endpointURL:(id)arg3;
+ (bool)allowsMultipleAccounts;
+ (id)localizedServiceName;
+ (void)loginWithUsername:(id)arg1 password:(id)arg2 blogURL:(id)arg3 completionHandler:(id /* block */)arg4;
+ (unsigned long long)modelVersion;
+ (id)serviceID;
+ (id)serviceName;

- (void).cxx_destruct;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3;
- (id)endpointURL;
- (bool)isValid;
- (id)localizedName;
- (void)refreshWithCompletionHandler:(id /* block */)arg1;
- (void)setEndpointURL:(id)arg1;

@end
