
@protocol INHangUpCallIntentExport <NSObject, JSExport>

@required

- (NSString *)callIdentifier;
- (id)init;
- (void)setCallIdentifier:(NSString *)arg1;

@end
