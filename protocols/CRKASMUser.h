
@protocol CRKASMUser <NSObject>

@required

- (NSString *)appleID;
- (NSString *)identifier;
- (bool)isFederated;
- (<CRKASMNameComponents> *)nameComponents;

@end
