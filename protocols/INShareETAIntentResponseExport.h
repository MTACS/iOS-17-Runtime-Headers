
@protocol INShareETAIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (unsigned long long)mediums;
- (NSArray *)recipients;
- (void)setMediums:(unsigned long long)arg1;
- (void)setRecipients:(NSArray *)arg1;

@end
