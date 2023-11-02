
@protocol HFDiffOperation <NSObject, NAEquatable>

@required

- (NSString *)operationDescription;
- (unsigned long long)type;

@end
