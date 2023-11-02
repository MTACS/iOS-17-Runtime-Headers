
@interface SUUICountdownViewController : UIViewController <SUUIArtworkRequestDelegate> {
    SUUIResourceLoader * _artworkLoader;
    SUUIClientContext * _clientContext;
    SUUICountdownComponent * _countdownComponent;
}

@property (nonatomic, readonly) SUUIResourceLoader *artworkLoader;
@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic, readonly) SUUICountdownComponent *countdownComponent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artworkLoader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)clientContext;
- (id)countdownComponent;
- (id)initWithCountdownComponent:(id)arg1 artworkLoader:(id)arg2;
- (void)loadView;
- (void)setClientContext:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
