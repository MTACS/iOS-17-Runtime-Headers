
@protocol TSCETableNameChangeProtocol

@required

- (void)didAddTableName:(NSString *)arg1 forTableUID:(struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })arg2;
- (void)didChangeTableName:(NSString *)arg1 fromTableName:(NSString *)arg2 forTableUID:(struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })arg3;
- (void)didRemoveTableName:(NSString *)arg1 forTableUID:(struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })arg2;

@end
