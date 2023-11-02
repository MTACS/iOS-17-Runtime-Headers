
@protocol DBHomeKitEntity <NSObject>

@required

- (double)distance;
- (NSString *)name;
- (NSString *)stateDescription;
- (NSUUID *)uniqueIdentifier;
- (bool)usable;

@end
