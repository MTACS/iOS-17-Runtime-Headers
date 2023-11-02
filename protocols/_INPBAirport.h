
@protocol _INPBAirport <NSObject>

@required

- (bool)hasIataCode;
- (bool)hasIcaoCode;
- (bool)hasName;
- (NSString *)iataCode;
- (NSString *)icaoCode;
- (NSString *)name;
- (void)setIataCode:(NSString *)arg1;
- (void)setIcaoCode:(NSString *)arg1;
- (void)setName:(NSString *)arg1;

@end
