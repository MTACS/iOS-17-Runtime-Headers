
@interface SALCMTvShow : SALCMContent

@property (nonatomic, copy) NSString *seriesName;

+ (id)tvShow;
+ (id)tvShowWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)seriesName;
- (void)setSeriesName:(id)arg1;

@end
