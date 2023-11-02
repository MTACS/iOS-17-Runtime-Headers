
@protocol INUnsendMessagesIntentExport <NSObject, JSExport>

@required

- (id)init;
- (NSArray *)messageIdentifiers;
- (void)setMessageIdentifiers:(NSArray *)arg1;

@end
