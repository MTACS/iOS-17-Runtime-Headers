
@protocol INRuntimeObject <NSObject>

@required

- (bool)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (id)valueForProperty:(NSString *)arg1;

@end
