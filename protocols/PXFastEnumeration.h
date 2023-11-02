
@protocol PXFastEnumeration <NSFastEnumeration, NSCopying, NSObject>

@required

- (id)copy;
- (unsigned long long)count;
- (id)firstObject;

@end
