
@protocol _WGDataSource <WGDataSource>

@required

- (void)removeDatumWithIdentifier:(NSString *)arg1;
- (void)replaceWithDatum:(id <WGDatum>)arg1;

@end
