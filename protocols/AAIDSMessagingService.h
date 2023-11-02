
@protocol AAIDSMessagingService <NSObject>

@required

- (<AAMessagingServiceDelegate> *)custodianDelegate;
- (void)doDestinations:(void *)arg1 haveIneligibleDeviceForCapability:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSArray *, AAMessagingCapability *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (void)fetchCapability:(void *)arg1 destinations:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: AAMessagingCapability *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (<AAMessagingServiceDelegate> *)inheritanceDelegate;
- (void)partitionByCapability:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: AAMessagingDestination *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (NSUUID *)sendMessage:(NSData *)arg1 destinations:(NSArray *)arg2 responseIdentifier:(NSString *)arg3 fireAndForget:(bool)arg4 requiredCapabilities:(NSSet *)arg5 lackingCapabilities:(NSSet *)arg6 error:(id*)arg7;
- (void)setCustodianDelegate:(id <AAMessagingServiceDelegate>)arg1;
- (void)setInheritanceDelegate:(id <AAMessagingServiceDelegate>)arg1;

@end
