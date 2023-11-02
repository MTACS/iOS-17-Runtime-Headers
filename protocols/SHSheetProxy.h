
@protocol SHSheetProxy <NSSecureCoding, NSObject>

@required

- (NSUUID *)identifier;
- (bool)isDisabled;

@end
