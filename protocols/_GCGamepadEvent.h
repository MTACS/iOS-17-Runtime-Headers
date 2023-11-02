
@protocol _GCGamepadEvent <NSCopying, NSObject>

@required

- (float)floatValueForElement:(long long)arg1;
- (bool)hasValidValueForElement:(long long)arg1;
- (unsigned long long)timestamp;

@end
