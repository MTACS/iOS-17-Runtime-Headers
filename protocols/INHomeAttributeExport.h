
@protocol INHomeAttributeExport <NSObject, JSExport>

@required

- (bool)boolValue;
- (double)doubleValue;
- (id)init;
- (void)setBoolValue:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setStringValue:(NSString *)arg1;
- (void)setType:(long long)arg1;
- (void)setValueType:(long long)arg1;
- (NSString *)stringValue;
- (long long)type;
- (long long)valueType;

@end
