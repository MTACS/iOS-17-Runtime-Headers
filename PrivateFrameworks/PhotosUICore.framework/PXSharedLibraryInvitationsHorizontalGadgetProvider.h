
@interface PXSharedLibraryInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXChangeObserver, PXForYouRankable> {
    bool  _didGenerateGadgets;
    PXSharedLibraryStatusProvider * _statusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (long long)forYouContentIdentifier;
- (void)generateGadgets;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithSharedLibraryStatusProvider:(id)arg1;
- (void)loadDataForGadgets;
- (id)mostRecentContentDate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)statusProvider;

@end
