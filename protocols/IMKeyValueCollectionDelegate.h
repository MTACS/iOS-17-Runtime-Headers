
@protocol IMKeyValueCollectionDelegate <NSObject>

@optional

- (void)keyValueCollection:(IMKeyValueCollection *)arg1 didUpdateValues:(NSDictionary *)arg2;
- (void)keyValueCollection:(IMKeyValueCollection *)arg1 willUpdateValues:(NSDictionary *)arg2;

@end
