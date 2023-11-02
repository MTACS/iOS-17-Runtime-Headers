
@interface PXMemoryViewModel : PXObservable <PXMutableMemoryViewModel> {
    bool  _isHighlighted;
    <PXDisplayAsset> * _keyAsset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    NSString * _localizedDateText;
    NSString * _localizedTitle;
    long long  _specSet;
    long long  _variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHighlighted;
@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic, readonly) NSString *localizedDateText;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) long long specSet;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long variant;

- (void).cxx_destruct;
- (id)init;
- (bool)isHighlighted;
- (id)keyAsset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (id)localizedDateText;
- (id)localizedTitle;
- (void)performChanges:(id /* block */)arg1;
- (void)setIsHighlighted:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLocalizedDateText:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setSpecSet:(long long)arg1;
- (void)setVariant:(long long)arg1;
- (long long)specSet;
- (long long)variant;

@end
