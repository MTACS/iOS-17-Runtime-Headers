
@interface _PXPhotosDetailsAssetsWidgetEventTracker : PXUserInterfaceElementEventTracker <PXChangeObserver, PXPhotosDetailsAssetsWidgetEventTracker> {
    bool  _isDisplayingCuratedContent;
    NSString * _visibleState;
    long long  _visibleStateSignpost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDisplayingCuratedContent;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *visibleState;
@property (nonatomic) long long visibleStateSignpost;

- (void).cxx_destruct;
- (void)_invalidateVisibleState;
- (void)_logDidEndViewingState:(id)arg1;
- (void)_logDidStartViewingState:(id)arg1;
- (void)_updateVisibleState;
- (id)init;
- (bool)isDisplayingCuratedContent;
- (void)logContentViewDidDisappear;
- (void)logContentViewWillAppear;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setIsDisplayingCuratedContent:(bool)arg1;
- (void)setVisibleState:(id)arg1;
- (void)setVisibleStateSignpost:(long long)arg1;
- (id)visibleState;
- (long long)visibleStateSignpost;

@end
