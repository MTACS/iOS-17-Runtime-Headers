
@protocol WFRecordStorage <NSObject>

@required

- (NSString *)identifier;

@optional

+ (NSDictionary *)recordPropertyMap;

- (void)didUpdateProperties:(NSSet *)arg1;

@end
