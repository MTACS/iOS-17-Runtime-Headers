
@protocol TSSPropertySource <NSObject>

@required

- (double)CGFloatValueForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (bool)containsProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;

@end
