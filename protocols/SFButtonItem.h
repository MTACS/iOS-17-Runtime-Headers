
@protocol SFButtonItem <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setUniqueId:(unsigned long long)arg1;
- (unsigned long long)uniqueId;

@end
