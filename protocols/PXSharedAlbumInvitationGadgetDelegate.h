
@protocol PXSharedAlbumInvitationGadgetDelegate <PXGadgetDelegate>

@optional

- (void)gadget:(id <PXGadget>)arg1 didAccept:(bool)arg2;
- (void)gadgetDidReportJunk:(id <PXGadget>)arg1;

@end
