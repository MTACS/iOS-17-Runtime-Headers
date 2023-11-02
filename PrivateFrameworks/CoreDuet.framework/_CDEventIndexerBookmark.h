
@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding> {
    NSDate * _earliestCreationDate;
    NSDate * _latestCreationDate;
    NSDate * _latestTombstoneDate;
    long long  _version;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
