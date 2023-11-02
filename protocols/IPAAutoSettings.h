
@protocol IPAAutoSettings <NSObject>

@required

- (bool)applyArchiveDictionary:(NSDictionary *)arg1;
- (NSDictionary *)archiveDictionary;
- (NSString *)identifier;
- (bool)pending;

@end
