
@interface CADInMemoryChangeTimestamp : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _timestamps;
    CalSingleDatabaseInMemoryChangeTimestamp * _universalTimestamp;
}

+ (bool)doesTimestamp:(id)arg1 includeAllChangesVisibleToTimestamp:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)timestampForNow;

- (void).cxx_destruct;
- (id)allDatabases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamps:(id)arg1;
- (id)redactedDescription;
- (id)timestampForDatabase:(int)arg1;
- (id)timestamps;

@end
