
@protocol BSProtobufSchemaBuilder <NSObject>

@required

- (void)addField:(const char *)arg1;
- (void)addField:(const char *)arg1 allowedClasses:(NSArray *)arg2;
- (void)addField:(const char *)arg1 forTag:(long long)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2 forTag:(long long)arg3;
- (void)addRepeatingField:(const char *)arg1 containsClasses:(NSArray *)arg2;

@end
