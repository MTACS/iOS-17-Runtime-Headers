
@interface BKUIAlertController : UIAlertController {
    <BKUIAlertControllerListener> * _alertListener;
}

@property (nonatomic) <BKUIAlertControllerListener> *alertListener;

- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (id)alertListener;
- (void)bkui_addPreferredAction:(id)arg1;
- (void)setAlertListener:(id)arg1;

@end
