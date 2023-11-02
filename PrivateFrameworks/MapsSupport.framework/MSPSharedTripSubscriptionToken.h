
@interface MSPSharedTripSubscriptionToken : NSObject {
    id /* block */  _invalidationHandler;
    NSString * _sharedTripIdentifier;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSharedTripIdentifier:(id)arg1 invalidationHandler:(id /* block */)arg2;

@end
