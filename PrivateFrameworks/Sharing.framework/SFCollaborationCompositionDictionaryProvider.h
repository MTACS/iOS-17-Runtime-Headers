
@interface SFCollaborationCompositionDictionaryProvider : NSObject <SFCollaborationItemChangeObserver, SFCollaborationItemsProviderDelegate> {
    SFCollaborationItemsProvider * _collaborationItemsProvider;
    DummySFCollaborationService * _collaborationService;
    <SFCollaborationCompositionDictionaryProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) SFCollaborationItemsProvider *collaborationItemsProvider;
@property (nonatomic, retain) DummySFCollaborationService *collaborationService;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <SFCollaborationCompositionDictionaryProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collaborationItemsProvider;
- (id)collaborationItemsProvider:(id)arg1 resolveActivityItem:(id)arg2;
- (id)collaborationService;
- (id)collaborationServiceForItemsProvider:(id)arg1;
- (id)delegate;
- (id)initWithItemProvider:(id)arg1 delegate:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2;
- (id)queue;
- (void)setCollaborationItemsProvider:(id)arg1;
- (void)setCollaborationService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;

@end
