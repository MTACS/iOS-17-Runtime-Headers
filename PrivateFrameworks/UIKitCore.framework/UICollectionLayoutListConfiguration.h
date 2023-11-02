
@interface UICollectionLayoutListConfiguration : NSObject <NSCopying> {
    long long  _appearance;
    UIColor * _backgroundColor;
    double  _cornerRadius;
    id /* block */  _didEndSwipingHandler;
    long long  _footerMode;
    long long  _headerMode;
    double  _headerTopPadding;
    id /* block */  _itemSeparatorHandler;
    id /* block */  _leadingSwipeActionsConfigurationProvider;
    UIListSeparatorConfiguration * _separatorConfiguration;
    bool  _showsSeparators;
    id /* block */  _trailingSwipeActionsConfigurationProvider;
    id /* block */  _willBeginSwipingHandler;
}

@property (getter=_cornerRadius, setter=_setCornerRadius:, nonatomic) double _cornerRadius;
@property (getter=_didEndSwipingHandler, setter=_setDidEndSwipingHandler:, nonatomic, copy) id /* block */ _didEndSwipingHandler;
@property (getter=_willBeginSwipingHandler, setter=_setWillBeginSwipingHandler:, nonatomic, copy) id /* block */ _willBeginSwipingHandler;
@property (nonatomic, readonly) long long appearance;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) long long footerMode;
@property (nonatomic) long long headerMode;
@property (nonatomic) double headerTopPadding;
@property (nonatomic, copy) id /* block */ itemSeparatorHandler;
@property (nonatomic, copy) id /* block */ leadingSwipeActionsConfigurationProvider;
@property (nonatomic, copy) UIListSeparatorConfiguration *separatorConfiguration;
@property (nonatomic) bool showsSeparators;
@property (nonatomic, copy) id /* block */ trailingSwipeActionsConfigurationProvider;

- (void).cxx_destruct;
- (double)_cornerRadius;
- (id /* block */)_didEndSwipingHandler;
- (void)_setCornerRadius:(double)arg1;
- (void)_setDidEndSwipingHandler:(id /* block */)arg1;
- (void)_setWillBeginSwipingHandler:(id /* block */)arg1;
- (id)_spiConfiguration;
- (id /* block */)_willBeginSwipingHandler;
- (long long)appearance;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)footerMode;
- (long long)headerMode;
- (double)headerTopPadding;
- (id)init;
- (id)initWithAppearance:(long long)arg1;
- (id /* block */)itemSeparatorHandler;
- (id /* block */)leadingSwipeActionsConfigurationProvider;
- (id)separatorConfiguration;
- (void)setBackgroundColor:(id)arg1;
- (void)setFooterMode:(long long)arg1;
- (void)setHeaderMode:(long long)arg1;
- (void)setHeaderTopPadding:(double)arg1;
- (void)setItemSeparatorHandler:(id /* block */)arg1;
- (void)setLeadingSwipeActionsConfigurationProvider:(id /* block */)arg1;
- (void)setSeparatorConfiguration:(id)arg1;
- (void)setShowsSeparators:(bool)arg1;
- (void)setTrailingSwipeActionsConfigurationProvider:(id /* block */)arg1;
- (bool)showsSeparators;
- (id /* block */)trailingSwipeActionsConfigurationProvider;

@end
