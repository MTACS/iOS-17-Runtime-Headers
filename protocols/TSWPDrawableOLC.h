
@protocol TSWPDrawableOLC

@optional

- (void)didAddDrawable:(id <TSDInfo>)arg1;
- (void)didRemoveDrawable:(id <TSDInfo>)arg1;
- (void)willAddDrawable:(id <TSDInfo>)arg1;
- (void)willRemoveDrawable:(id <TSDInfo>)arg1;
- (void)willRemoveDrawable:(id <TSDInfo>)arg1 storage:(TSWPStorage *)arg2;

@end
