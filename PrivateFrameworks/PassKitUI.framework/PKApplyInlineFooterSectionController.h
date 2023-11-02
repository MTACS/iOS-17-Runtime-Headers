
@interface PKApplyInlineFooterSectionController : PKApplyCollectionViewSectionController <PKApplyInlineFooterSectionControllerDelegate> {
    PKApplyFooterContent * _content;
    <PKApplyInlineFooterSectionControllerDelegate> * _delegate;
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureContentSection:(id)arg1;
- (void)didTapFooterLink:(id)arg1;
- (id)identifiers;
- (id)initWithController:(id)arg1 applyPage:(id)arg2 content:(id)arg3 delegate:(id)arg4;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
