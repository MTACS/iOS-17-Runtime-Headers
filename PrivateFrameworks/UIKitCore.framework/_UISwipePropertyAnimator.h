
@interface _UISwipePropertyAnimator : UIViewPropertyAnimator {
    NSHashTable * _viewsToAnimateAdditively;
}

- (void).cxx_destruct;
- (bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (void)addViewsToAnimateAdditively:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
