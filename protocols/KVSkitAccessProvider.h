
@protocol KVSkitAccessProvider

@required

- (NSObject<KVSkitReadAccess> *)accessReadOnlySkitForUser:(NSNumber *)arg1;
- (bool)setItems:(NSArray *)arg1 error:(id*)arg2;
- (bool)supportsMultiUser;

@end
