
@protocol _SFPBSportsDetail <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)requested_entity_type;
- (void)setRequested_entity_type:(NSString *)arg1;

@end
