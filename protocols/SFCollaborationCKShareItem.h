
@protocol SFCollaborationCKShareItem <SFCollaborationItem>

@required

- (CKContainerSetupInfo *)containerSetupInfo;
- (bool)isServiceManatee;
- (void)setContainerSetupInfo:(CKContainerSetupInfo *)arg1;

@end
