
@interface _UIBarInsertLayoutData : NSObject <NSCopying> {
    bool  _active;
    double  _assignedHeight;
    double  _bottomInsetForTransitionProgress;
    bool  _collapsible;
    double  _collapsingHeight;
    NSString * _identifier;
    bool  _ignoredForCollapsingBehaviors;
    double  _minimumHeight;
    long long  _order;
    double  _preferredHeight;
    bool  _prefersExpanded;
    long long  _priority;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;

@end
