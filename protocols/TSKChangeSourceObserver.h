
@protocol TSKChangeSourceObserver <NSObject>

@optional

- (void)asyncProcessChanges:(NSArray *)arg1 forChangeSource:(id)arg2;
- (void)syncProcessChanges:(NSArray *)arg1 forChangeSource:(id)arg2;

@end
