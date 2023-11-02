
@interface SYBacklinkFilterCache : NSObject <NSSecureCoding> {
    NSArray * _activityTypes;
    NSData * _data;
    NSMutableArray * _entries;
}

@property (nonatomic, retain) NSArray *activityTypes;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSMutableArray *entries;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityTypes;
- (void)addEntriesForItem:(id)arg1;
- (bool)containsMatchingEntriesForItem:(id)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (void)finalize;
- (unsigned long long)hash;
- (id)initWithActivityTypes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActivityTypes:(id)arg1;
- (void)setData:(id)arg1;
- (void)setEntries:(id)arg1;

@end
