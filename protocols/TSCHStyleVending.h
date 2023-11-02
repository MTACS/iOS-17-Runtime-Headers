
@protocol TSCHStyleVending <NSObject>

@required

- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (id)objectValueForProperty:(int)arg1;

@end
