
@protocol REMChangedObjectIdentifying <NSObject, NSCopying>

@required

- (NSString *)entityName;
- (NSUUID *)uuid;

@end
