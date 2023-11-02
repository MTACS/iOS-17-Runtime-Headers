
@interface AVTViewSession : NSObject {
    bool  _active;
    struct CGSize { 
        double width; 
        double height; 
    }  _aspectRatio;
    AVTView * _avtView;
    UIView * _avtViewContainer;
    AVTViewUpdater * _avtViewUpdater;
    id /* block */  _becomeActiveHandler;
    <AVTViewSessionDelegate> * _delegate;
    id /* block */  _tearDownHandler;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } aspectRatio;
@property (nonatomic) AVTView *avtView;
@property (nonatomic) UIView *avtViewContainer;
@property (nonatomic) AVTViewUpdater *avtViewUpdater;
@property (nonatomic, readonly, copy) id /* block */ becomeActiveHandler;
@property (nonatomic) <AVTViewSessionDelegate> *delegate;
@property (nonatomic, readonly, copy) id /* block */ tearDownHandler;

- (void).cxx_destruct;
- (void)activateWithAVTView:(id)arg1 container:(id)arg2 updater:(id)arg3;
- (struct CGSize { double x1; double x2; })aspectRatio;
- (id)avtView;
- (id)avtViewContainer;
- (id)avtViewUpdater;
- (id /* block */)becomeActiveHandler;
- (id)delegate;
- (id)initWithBecomeActiveHandler:(id /* block */)arg1 tearDownHandler:(id /* block */)arg2 aspectRatio:(struct CGSize { double x1; double x2; })arg3;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setAvtView:(id)arg1;
- (void)setAvtViewContainer:(id)arg1;
- (void)setAvtViewUpdater:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id /* block */)tearDownHandler;
- (void)tearDownWithCompletionHandler:(id /* block */)arg1;

@end
