
@interface _UITintColorVisitor : _UIViewVisitor {
    UIView * _changedSubview;
    UIView * _originalVisitedView;
    unsigned long long  _reasons;
}

- (bool)_prepareToVisitView:(id)arg1 changedSubview:(id)arg2 previousWindow:(id)arg3 previousSuperview:(id)arg4;
- (bool)_visitView:(id)arg1;
- (id)initWithNotificationReasons:(unsigned long long)arg1;
- (id)initWithTraversalDirection:(unsigned long long)arg1;

@end
