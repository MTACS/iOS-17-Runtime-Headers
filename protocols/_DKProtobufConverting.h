
@protocol _DKProtobufConverting <NSObject>

@required

+ (id)fromPBCodable:(PBCodable *)arg1;

- (PBCodable *)toPBCodable;

@end
