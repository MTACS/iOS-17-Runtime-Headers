
@protocol TSKArchivedSelection <NSObject>

@required

- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg1;

@optional

- (TSKSelection *)selectionWithParent:(TSKSelection *)arg1;

@end
