
@interface PKScrollViewDelegateEventsHandler : NSObject <UIScrollViewDelegate> {
    id /* block */  _scrollViewDidEndScrollingAnimationHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ scrollViewDidEndScrollingAnimationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id /* block */)scrollViewDidEndScrollingAnimationHandler;
- (void)setScrollViewDidEndScrollingAnimationHandler:(id /* block */)arg1;

@end
