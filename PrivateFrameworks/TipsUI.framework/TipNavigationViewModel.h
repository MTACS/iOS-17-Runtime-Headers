
@interface TipNavigationViewModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentTip;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _tips;
}

@property (nonatomic, readonly) bool canGoBack;
@property (nonatomic, readonly) bool canGoNext;
@property (nonatomic, retain) TPSTip *currentTip;
@property (nonatomic, readonly) long long currentTipIndex;
@property (nonatomic, copy) NSArray *tips;

- (void).cxx_destruct;
- (bool)canGoBack;
- (bool)canGoNext;
- (id)currentTip;
- (void)currentTipDidChangeToTip:(id)arg1;
- (long long)currentTipIndex;
- (void)goBack;
- (void)goNext;
- (id)init;
- (void)selectTipAtIndex:(long long)arg1;
- (void)setCurrentTip:(id)arg1;
- (void)setTips:(id)arg1;
- (id)tips;

@end
