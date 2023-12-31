
@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {
    bool  _isVerticalLayoutAxis;
    long long  _resolvedPresentationStyle;
}

@property (nonatomic, readonly) bool isVerticalLayoutAxis;
@property (nonatomic, readonly) long long resolvedPresentationStyle;

- (void)_collectStateFromGroupViewState:(id)arg1;
- (bool)_stateEqualToGroupViewState:(id)arg1;
- (id)copyWithResolvedPresentationStyle:(long long)arg1;
- (id)copyWithVerticalLayoutAxis:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isVerticalLayoutAxis;
- (long long)resolvedPresentationStyle;

@end
