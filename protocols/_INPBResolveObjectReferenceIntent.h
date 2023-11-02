
@protocol _INPBResolveObjectReferenceIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasReference;
- (_INPBIntentMetadata *)intentMetadata;
- (NSData *)reference;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setReference:(NSData *)arg1;

@end
