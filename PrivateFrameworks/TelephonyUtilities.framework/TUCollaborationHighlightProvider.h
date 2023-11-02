
@interface TUCollaborationHighlightProvider : NSObject <SWHighlightCenterDelegate, TUCollaborationProvider> {
    NSMutableDictionary * _collaborationIdentifierToBundleIDs;
    NSMutableDictionary * _collaborationIdentifierToPendingCollaborations;
    SWHighlightCenter * _highlightCenter;
    <TUCollaborationProviderDelegate> * delegate;
}

@property (nonatomic, readonly) NSMutableDictionary *collaborationIdentifierToBundleIDs;
@property (nonatomic, readonly) NSMutableDictionary *collaborationIdentifierToPendingCollaborations;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUCollaborationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SWHighlightCenter *highlightCenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addTemporaryCollaboration:(id)arg1;
- (id)ckBundleIDForCollaborationIdentifier:(id)arg1;
- (id)collaborationHighlightForIdentifier:(id)arg1;
- (id)collaborationIdentifierToBundleIDs;
- (id)collaborationIdentifierToPendingCollaborations;
- (id)delegate;
- (id)highlightCenter;
- (void)highlightCenterHighlightsDidChange:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
