
@protocol DNDSApplicationIdentifierMapping <NSObject>

@required

- (DNDApplicationIdentifier *)applicationIdentifierForFileWithSourceApplicationIdentifier:(DNDApplicationIdentifier *)arg1;
- (DNDApplicationIdentifier *)applicationIdentifierForSyncWithSourceApplicationIdentifier:(DNDApplicationIdentifier *)arg1;

@end
