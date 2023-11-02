
@protocol MGGroupIdentifierProtocol <NSObject, NSCopying>

@required

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
