
@protocol SITraceable

@required

+ (NSDictionary *)tracingEntryFormat;

- (NSDictionary *)tracingEntry;

@end
