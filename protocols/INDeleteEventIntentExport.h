
@protocol INDeleteEventIntentExport <NSObject, JSExport>

@required

- (NSNumber *)deleteAllOccurrences;
- (id)init;
- (void)setDeleteAllOccurrences:(NSNumber *)arg1;
- (void)setTargetEventIdentifier:(NSString *)arg1;
- (NSString *)targetEventIdentifier;

@end
