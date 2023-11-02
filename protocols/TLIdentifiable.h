
@protocol TLIdentifiable <NSSecureCoding, NSObject, NSCopying>

@required

- (bool)tl_isEqualToIdentifiable:(id <TLIdentifiable>)arg1;

@end
