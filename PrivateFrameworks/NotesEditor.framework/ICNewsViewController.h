
@interface ICNewsViewController : UIViewController {
    ICAttachment * _attachment;
    NSSNewsViewController * _newsViewController;
    NSURL * _url;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, retain) NSSNewsViewController *newsViewController;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)attachment;
- (id)initWithURL:(id)arg1;
- (id)newsViewController;
- (void)setAttachment:(id)arg1;
- (void)setNewsViewController:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)viewDidLoad;

@end
