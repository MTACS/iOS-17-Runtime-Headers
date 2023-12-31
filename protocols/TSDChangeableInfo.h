
@protocol TSDChangeableInfo <TSDInfo>

@required

- (void)beginCollectingChanges;
- (TSSPropertySetChangeDetails *)endCollectingChanges;
- (bool)isUserModifiable;
- (void)willChangeProperty:(int)arg1;

@optional

- (Class)editorClass;
- (void)willChangeProperties:(TSSPropertySet *)arg1;

@end
