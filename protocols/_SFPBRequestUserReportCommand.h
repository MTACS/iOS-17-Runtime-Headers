
@protocol _SFPBRequestUserReportCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setUserReportRequest:(_SFPBUserReportRequest *)arg1;
- (_SFPBUserReportRequest *)userReportRequest;

@end
