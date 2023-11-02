
@protocol MKFObject <NSObject, MKFObjectCasting>

@required

+ (Protocol *)backingModelProtocol;

- (MKFObjectDatabaseID *)databaseID;

@end
