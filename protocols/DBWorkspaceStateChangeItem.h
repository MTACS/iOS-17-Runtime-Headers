
@protocol DBWorkspaceStateChangeItem <NSObject, NSCopying, NSMutableCopying>

@required

- (unsigned long long)changeType;
- (void)setChangeType:(unsigned long long)arg1;

@end
