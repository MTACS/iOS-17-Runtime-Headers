
@protocol TUCollaborationProvider <NSObject>

@required

- (SWCollaborationHighlight *)addTemporaryCollaboration:(NSDictionary *)arg1;
- (NSArray *)ckBundleIDForCollaborationIdentifier:(NSString *)arg1;
- (SWCollaborationHighlight *)collaborationHighlightForIdentifier:(NSString *)arg1;
- (<TUCollaborationProviderDelegate> *)delegate;
- (void)setDelegate:(id <TUCollaborationProviderDelegate>)arg1;

@end
