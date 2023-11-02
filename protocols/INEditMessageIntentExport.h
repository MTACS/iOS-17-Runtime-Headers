
@protocol INEditMessageIntentExport <NSObject, JSExport>

@required

- (NSString *)editedContent;
- (id)init;
- (NSString *)messageIdentifier;
- (void)setEditedContent:(NSString *)arg1;
- (void)setMessageIdentifier:(NSString *)arg1;

@end
