
@protocol PXPhotoStreamComposeServiceDelegate <NSObject>

@required

- (void)photoStreamComposeService:(PXPhotoStreamComposeServiceViewController *)arg1 didPostComment:(NSString *)arg2;
- (void)photoStreamComposeServiceDidCancel:(PXPhotoStreamComposeServiceViewController *)arg1;

@end
