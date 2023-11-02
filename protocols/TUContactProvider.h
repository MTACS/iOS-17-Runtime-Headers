
@protocol TUContactProvider <NSObject>

@required

- (NSDictionary *)tu_contactsByContactHandleForContactHandles:(NSArray *)arg1 keyDescriptors:(NSArray *)arg2 error:(id*)arg3;

@end
