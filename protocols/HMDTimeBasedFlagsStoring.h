
@protocol HMDTimeBasedFlagsStoring

@required

- (void)archiveDictionary:(NSDictionary *)arg1;
- (NSDictionary *)unarchive;
- (NSDictionary *)unarchiveLegacyEventFlags;

@end
