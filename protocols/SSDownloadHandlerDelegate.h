
@protocol SSDownloadHandlerDelegate <NSObject>

@optional

- (void)downloadHandler:(SSDownloadHandler *)arg1 cancelSession:(SSDownloadSession *)arg2;
- (void)downloadHandler:(SSDownloadHandler *)arg1 handleAuthenticationSession:(SSDownloadAuthenticationSession *)arg2;
- (void)downloadHandler:(SSDownloadHandler *)arg1 handleSession:(SSDownloadHandlerSession *)arg2;
- (bool)downloadHandler:(SSDownloadHandler *)arg1 pauseSession:(SSDownloadSession *)arg2;
- (void)downloadHandlerDidDisconnect:(SSDownloadHandler *)arg1;

@end
