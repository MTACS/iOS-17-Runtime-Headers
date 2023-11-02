
@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXCMMInvitationGadgetDelegate, PXChangeObserver, PXSectionedDataSourceManagerObserver> {
    PXCMMInvitationsDataSource * _dataSource;
    PXCMMInvitationsDataSourceManager * _dataSourceManager;
    bool  _didGenerateGadgets;
    <PXCMMWorkflowPresenting> * _workflowPresenter;
}

@property (nonatomic, readonly) PXCMMInvitationsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXCMMWorkflowPresenting> *workflowPresenter;

- (void).cxx_destruct;
- (id)_newGadgetForObjectID:(id)arg1;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 workflowPresenter:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)invitationForGadget:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)workflowPresenter;

@end
