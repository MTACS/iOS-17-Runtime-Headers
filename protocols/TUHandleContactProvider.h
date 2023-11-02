
@protocol TUHandleContactProvider <NSObject>

@required

- (NSDictionary *)tu_contactsByHandleForHandles:(NSArray *)arg1 keyDescriptors:(NSArray *)arg2 error:(id*)arg3;

@end
