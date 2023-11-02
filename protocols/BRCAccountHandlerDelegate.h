
@protocol BRCAccountHandlerDelegate <NSObject>

@required

- (void)accountHandler:(BRCAccountHandler *)arg1 didChangeSessionTo:(BRCAccountSession *)arg2;
- (void)accountHandler:(BRCAccountHandler *)arg1 willChangeSessionFrom:(BRCAccountSession *)arg2;

@end
