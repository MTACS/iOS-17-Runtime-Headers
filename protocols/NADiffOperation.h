
@protocol NADiffOperation <NSObject, NAEquatable>

@required

- (NSString *)operationDescription;
- (unsigned long long)type;

@end
