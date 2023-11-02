
@protocol REMNullableObjectIDProviding

@required

+ (NSString *)cdEntityName;
+ (REMObjectID *)newObjectID;
+ (REMObjectID *)objectIDWithUUID:(NSUUID *)arg1;

- (REMObjectID *)remObjectID;

@end
