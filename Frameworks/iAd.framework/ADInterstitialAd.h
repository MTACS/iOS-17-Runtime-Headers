
@interface ADInterstitialAd : NSObject {
    bool  _actionInProgress;
    id  _delegate;
    bool  _loaded;
}

@property (getter=isActionInProgress, nonatomic, readonly) bool actionInProgress;
@property (nonatomic) id delegate;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;

- (void).cxx_destruct;
- (void)cancelAction;
- (id)delegate;
- (bool)isActionInProgress;
- (bool)isLoaded;
- (void)presentFromViewController:(id)arg1;
- (bool)presentInView:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
