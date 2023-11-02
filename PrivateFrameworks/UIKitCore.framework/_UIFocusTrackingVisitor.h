
@interface _UIFocusTrackingVisitor : _UIViewVisitor {
    unsigned long long  _countOfFocusedAncestorTrackingViewsInSubtree;
    bool  _subviewAddedToHierarchy;
}

- (bool)_prepareToVisitView:(id)arg1 changedSubview:(id)arg2 previousWindow:(id)arg3 previousSuperview:(id)arg4;
- (bool)_visitView:(id)arg1;

@end
