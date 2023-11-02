
@interface SUICHandsOnAutoDismissalStrategy : SUICAutoDismissalStrategy {
    id /* block */  _mapsNavigationStatusIsActiveBlock;
}

- (void).cxx_destruct;
- (id /* block */)_mapsNavigationStatusIsActiveBlock;
- (void)_setMapsNavigationStatusIsActiveBlock:(id /* block */)arg1;
- (double)idleTimeInterval;
- (bool)shouldDismiss;

@end
