
@protocol _HDSeriesFreezeJournalEntrySeries <NSObject>

@required

+ (bool)freezeSeriesWithIdentifier:(NSUUID *)arg1 metadata:(NSDictionary *)arg2 profile:(HDProfile *)arg3 error:(id*)arg4;

@end
