
@protocol MKFShortcutAction <MKFAction, MKFShortcutActionPublicExtensions>

@required

- (NSData *)data;
- (MKFShortcutActionDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setData:(NSData *)arg1;

@end
