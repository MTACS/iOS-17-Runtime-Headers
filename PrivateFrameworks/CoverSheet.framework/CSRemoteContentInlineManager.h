
@interface CSRemoteContentInlineManager : NSObject <CSRemoteContentInlineProvidingManager> {
    bool  _inlineRemoteContentHidden;
    CSAdjunctListItem * _item;
    <CSItemDestination> * _itemDestination;
    <CSRemoteContentInlineProviding> * _remoteContentInlineProvider;
    CSRemoteContentInlineViewController * _remoteInlineViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInlineRemoteContentHidden, nonatomic) bool inlineRemoteContentHidden;
@property (nonatomic, readonly) bool isInlineRemoteContentVisible;
@property (nonatomic) <CSRemoteContentInlineProviding> *remoteContentInlineProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentInlineRemoteContent:(id)arg1 animatePresentation:(bool)arg2 retryOnFailure:(bool)arg3;
- (void)dealloc;
- (id)initWithItemDestination:(id)arg1;
- (bool)isInlineRemoteContentHidden;
- (bool)isInlineRemoteContentVisible;
- (void)presentInlineRemoteContent:(id)arg1 animatePresentation:(bool)arg2;
- (id)remoteContentInlineProvider;
- (void)removeInlineRemoteContentWithAnimatedDismissal:(bool)arg1;
- (void)setInlineRemoteContentHidden:(bool)arg1;
- (void)setRemoteContentInlineProvider:(id)arg1;

@end
