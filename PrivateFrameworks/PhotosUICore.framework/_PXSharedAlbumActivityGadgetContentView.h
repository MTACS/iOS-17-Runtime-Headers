
@interface _PXSharedAlbumActivityGadgetContentView : UIView <PXFocusInfoProvider> {
    PXFocusInfo * _focusInfo;
    id /* block */  _focusInfoChangeHandler;
    id /* block */  _layoutSubviewsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFocusInfo *focusInfo;
@property (nonatomic, copy) id /* block */ focusInfoChangeHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ layoutSubviewsHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)focusInfo;
- (id /* block */)focusInfoChangeHandler;
- (void)layoutSubviews;
- (id /* block */)layoutSubviewsHandler;
- (void)setFocusInfo:(id)arg1;
- (void)setFocusInfoChangeHandler:(id /* block */)arg1;
- (void)setLayoutSubviewsHandler:(id /* block */)arg1;

@end
