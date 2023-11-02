
@protocol MSPImmutableObject <MSPIdentifiable, NSMutableCopying>

@required

+ (Class)mutableObjectClass;
+ (Protocol *)mutableObjectProtocol;

- (id)mutableCopy;

@end
