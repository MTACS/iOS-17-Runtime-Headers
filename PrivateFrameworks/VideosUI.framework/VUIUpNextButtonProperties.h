
@interface VUIUpNextButtonProperties : NSObject {
    VUIUpNextStateView * _addedStateView;
    NSString * _canonicalID;
    bool  _confirmationShouldWaitCompletion;
    UIView * _currentImageView;
    UIView<VUIUpNextButtonProtocol> * _delegate;
    bool  _dismissOnSelect;
    bool  _isWatchListed;
    VUIUpNextStateView * _removedStateView;
}

@property (nonatomic, readonly) VUIUpNextStateView *addedStateView;
@property (nonatomic, retain) NSString *canonicalID;
@property (nonatomic) bool confirmationShouldWaitCompletion;
@property (nonatomic, retain) UIView *currentImageView;
@property (nonatomic) UIView<VUIUpNextButtonProtocol> *delegate;
@property (nonatomic) bool dismissOnSelect;
@property (nonatomic) bool isWatchListed;
@property (nonatomic, readonly) VUIUpNextStateView *removedStateView;

- (void).cxx_destruct;
- (void)_errorInUpdatingState:(id)arg1;
- (void)_toggleUpNextState;
- (id)addedStateView;
- (void)callAPIAndToggleUpNextState;
- (id)canonicalID;
- (bool)confirmationShouldWaitCompletion;
- (id)currentImageView;
- (void)dealloc;
- (id)delegate;
- (bool)dismissOnSelect;
- (id)init;
- (bool)isWatchListed;
- (void)removeNotificationObserver;
- (id)removedStateView;
- (void)setCanonicalID:(id)arg1;
- (void)setConfirmationShouldWaitCompletion:(bool)arg1;
- (void)setCurrentImageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissOnSelect:(bool)arg1;
- (void)setIsWatchListed:(bool)arg1;
- (void)setupNotificationObserver;
- (void)updateButtonContentView;

@end
