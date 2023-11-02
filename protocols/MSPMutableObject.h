
@protocol MSPMutableObject <NSMutableCopying, MSPIdentifiable, MSPTransferableToImmutable>

@required

+ (Class)immutableObjectClass;
+ (Protocol *)immutableObjectProtocol;

- (id)mutableCopy;

@end
