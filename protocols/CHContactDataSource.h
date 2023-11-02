
@protocol CHContactDataSource <NSObject>

@required

- (NSDictionary *)contactsByContactHandleForContactHandles:(NSArray *)arg1 keyDescriptors:(NSArray *)arg2 error:(id*)arg3;

@end
