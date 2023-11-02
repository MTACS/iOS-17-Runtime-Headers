
@protocol INIntentResponseExport <NSObject, JSExport>

@required

- (long long)_intentHandlingStatus;
- (NSData *)_payloadResponseMessageData;
- (void)_setPayloadResponseMessageData:(NSData *)arg1;
- (_INPBIntentResponse *)backingStore;
- (id)init;

@end
