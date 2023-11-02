
@protocol CPLSharedRecordPropertyMapping <NSObject>

@required

- (bool)shouldUpdatePropertyOnPrivateRecord:(NSString *)arg1 recordClass:(Class)arg2;
- (bool)shouldUpdatePropertyOnSharedRecord:(NSString *)arg1 recordClass:(Class)arg2;

@end
