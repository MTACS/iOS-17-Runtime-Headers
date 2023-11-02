
@interface PXCreateSharedAlbumActionPerformer : PXActionPerformer <PXPhotoStreamComposeServiceDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithPresentationEnvironment:(id)arg1;
- (void)performUserInteractionTask;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;

@end
