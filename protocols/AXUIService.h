
@protocol AXUIService <NSObject>

@required

- (NSDictionary *)processMessage:(NSDictionary *)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(NSString *)arg3 error:(id*)arg4;

@optional

+ (NSSet *)possibleRequiredEntitlementsForProcessingMessageWithIdentifier:(unsigned long long)arg1;
+ (NSString *)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned long long)arg1;
+ (id)sharedInstance;

- (AXAccessQueue *)accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg1;
- (void)connectionWillBeInterruptedForClientWithIdentifier:(NSString *)arg1;
- (bool)messageWithIdentifierRequiresWritingBlock:(unsigned long long)arg1;
- (bool)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg1;
- (void)processInitializationMessage:(NSDictionary *)arg1;
- (void)processMessageAsynchronously:(void *)arg1 withIdentifier:(void *)arg2 fromClientWithIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSDictionary *, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (int)serviceTypeForClientWithIdentifier:(NSString *)arg1;
- (void)serviceWasFullyInitialized;

@end
