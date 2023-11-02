
@protocol INSendMessageIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSArray *)sentMessages;
- (void)setSentMessages:(NSArray *)arg1;

@end
