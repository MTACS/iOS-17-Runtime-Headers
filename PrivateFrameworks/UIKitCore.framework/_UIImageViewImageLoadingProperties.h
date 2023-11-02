
@interface _UIImageViewImageLoadingProperties : NSObject {
    bool  _enqueueingLoad;
    UIImage * _imageBeingSetByLoader;
    _UIImageLoader * _imageLoader;
    <_UIImageViewLoadingDelegate> * _loadingDelegate;
    UIView * _placeholderView;
    bool  _startingLoad;
    bool  _stoppingLoad;
}

@property (getter=isEnqueueingLoad, nonatomic) bool enqueueingLoad;
@property (nonatomic, retain) UIImage *imageBeingSetByLoader;
@property (nonatomic, retain) _UIImageLoader *imageLoader;
@property (nonatomic, retain) <_UIImageViewLoadingDelegate> *loadingDelegate;
@property (nonatomic, retain) UIView *placeholderView;
@property (getter=isStartingLoad, nonatomic) bool startingLoad;
@property (getter=isStoppingLoad, nonatomic) bool stoppingLoad;

- (void).cxx_destruct;
- (id)imageBeingSetByLoader;
- (id)imageLoader;
- (bool)isEnqueueingLoad;
- (bool)isStartingLoad;
- (bool)isStoppingLoad;
- (id)loadingDelegate;
- (id)placeholderView;
- (void)setEnqueueingLoad:(bool)arg1;
- (void)setImageBeingSetByLoader:(id)arg1;
- (void)setImageLoader:(id)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setStartingLoad:(bool)arg1;
- (void)setStoppingLoad:(bool)arg1;

@end
