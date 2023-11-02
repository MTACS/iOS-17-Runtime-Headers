
@interface PKPaymentSetupPrivacyLinkSectionController : PKPaymentSetupListSectionController {
    OBPrivacyLinkController * _privacyLink;
}

@property (nonatomic, retain) OBPrivacyLinkController *privacyLink;

- (void).cxx_destruct;
- (id)init;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)privacyLink;
- (void)setPrivacyLink:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
