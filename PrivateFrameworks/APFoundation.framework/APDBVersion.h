
@interface APDBVersion : APDatabaseRow

@property (nonatomic, retain) NSNumber *version;

+ (id)currentVersion;

- (id)initWithVersion:(id)arg1;

@end
