
@protocol SFApiResults <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)flights;
- (NSData *)jsonData;
- (int)resultType;
- (void)setFlights:(NSArray *)arg1;
- (void)setResultType:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
