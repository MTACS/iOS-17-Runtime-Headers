
@protocol TSWPTextSpanningObject <NSObject>

@required

- (bool)isEquivalentToObject:(NSObject<TSWPTextSpanningObject> *)arg1;
- (void)resetTextAttributeUUIDString;
- (NSString *)textAttributeUUIDString;

@optional

- (void)migrateWithDocumentRoot:(TSKDocumentRoot *)arg1;
- (bool)supportsDeepCopyForUndo;

@end
