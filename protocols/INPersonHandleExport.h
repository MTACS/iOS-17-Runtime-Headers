
@protocol INPersonHandleExport <NSObject, JSExport>

@required

- (id)init;
- (NSString *)label;
- (void)setLabel:(NSString *)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(NSString *)arg1;
- (long long)type;
- (NSString *)value;

@end
