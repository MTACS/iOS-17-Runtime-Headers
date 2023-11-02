
@protocol SFRequestUserReportCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setUserReportRequest:(SFUserReportRequest *)arg1;
- (SFUserReportRequest *)userReportRequest;

@end
