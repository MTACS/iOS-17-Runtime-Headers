
@interface DNDAppConfigurationService : NSObject {
    NSString * _clientIdentifier;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1;
- (void)getCurrentAppConfigurationForActionIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)invalidateAppContextForActionIdentifier:(id)arg1;

@end
