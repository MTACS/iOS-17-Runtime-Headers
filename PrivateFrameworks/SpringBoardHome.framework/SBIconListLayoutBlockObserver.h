
@interface SBIconListLayoutBlockObserver : NSObject <BSInvalidatable, SBIconListLayoutObserver> {
    id /* block */  _boundsSizeChangeBlock;
    id /* block */  _didAddIconViewBlock;
    id /* block */  _didRemoveIconViewBlock;
}

@property (nonatomic, copy) id /* block */ boundsSizeChangeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didAddIconViewBlock;
@property (nonatomic, copy) id /* block */ didRemoveIconViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)boundsSizeChangeBlock;
- (id /* block */)didAddIconViewBlock;
- (id /* block */)didRemoveIconViewBlock;
- (void)iconListView:(id)arg1 didAddIconView:(id)arg2;
- (void)iconListView:(id)arg1 didRemoveIconView:(id)arg2;
- (void)iconListViewDidChangeBoundsSize:(id)arg1;
- (void)invalidate;
- (void)setBoundsSizeChangeBlock:(id /* block */)arg1;
- (void)setDidAddIconViewBlock:(id /* block */)arg1;
- (void)setDidRemoveIconViewBlock:(id /* block */)arg1;

@end
