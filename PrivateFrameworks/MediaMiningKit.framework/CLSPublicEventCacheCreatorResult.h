
@interface CLSPublicEventCacheCreatorResult : NSObject {
    NSDictionary * _invalidationTokenByTimeLocationIdentifier;
    unsigned long long  _numberOfRequests;
    NSDictionary * _resolvedPublicEventsByTimeLocationIdentifier;
}

@property (nonatomic, retain) NSDictionary *invalidationTokenByTimeLocationIdentifier;
@property (nonatomic) unsigned long long numberOfRequests;
@property (nonatomic, retain) NSDictionary *resolvedPublicEventsByTimeLocationIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)invalidationTokenByTimeLocationIdentifier;
- (unsigned long long)numberOfRequests;
- (id)resolvedPublicEventsByTimeLocationIdentifier;
- (void)setInvalidationTokenByTimeLocationIdentifier:(id)arg1;
- (void)setNumberOfRequests:(unsigned long long)arg1;
- (void)setResolvedPublicEventsByTimeLocationIdentifier:(id)arg1;

@end
