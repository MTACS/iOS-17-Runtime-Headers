
@protocol APDataObject <NSObject>

@required

- (void)setValue:(id)arg1 forColumnName:(NSString *)arg2;
- (long long)typeForColumnName:(NSString *)arg1;
- (id)valueForColumnName:(NSString *)arg1;

@end
