
@interface PXCloudQuotaController : NSObject {
    <PXCloudQuotaControllerDelegate> * _delegate;
    UIView * _informationView;
}

@property (nonatomic) <PXCloudQuotaControllerDelegate> *delegate;
@property (nonatomic, retain) UIView *informationView;

- (void).cxx_destruct;
- (id)delegate;
- (id)informationView;
- (id)init;
- (id)presentingViewControllerForInformationView;
- (void)setDelegate:(id)arg1;
- (void)setInformationView:(id)arg1;

@end
