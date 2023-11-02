
@interface PXCMMComponentViewController : UIViewController {
    PXCMMSession * _session;
}

@property (nonatomic, readonly) PXCMMSession *session;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (id)session;

@end
