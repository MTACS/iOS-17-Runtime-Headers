
@interface DOCDocBrowserVC_UIActivityViewController : UIActivityViewController {
    UIBarButtonItem * _barButtonItem;
    <DOCServicePopoverTrackerProtocol> * _popoverTracker;
}

@property UIBarButtonItem *barButtonItem;
@property (retain) <DOCServicePopoverTrackerProtocol> *popoverTracker;

- (void).cxx_destruct;
- (id)barButtonItem;
- (id)popoverTracker;
- (void)setBarButtonItem:(id)arg1;
- (void)setPopoverTracker:(id)arg1;

@end
