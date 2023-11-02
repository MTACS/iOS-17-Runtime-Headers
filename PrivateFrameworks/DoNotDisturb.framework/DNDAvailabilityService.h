
@interface DNDAvailabilityService : NSObject {
    NSString * _clientIdentifier;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1;
- (bool)isLocalUserAvailableReturningError:(id*)arg1;

@end
