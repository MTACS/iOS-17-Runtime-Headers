
@protocol INSearchForContactIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSArray *)matchedContacts;
- (void)setMatchedContacts:(NSArray *)arg1;

@end
