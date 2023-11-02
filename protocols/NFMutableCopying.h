
@protocol NFMutableCopying <NSMutableCopying, NFCopying>

@required

- (id)mutableCopy;

@end
