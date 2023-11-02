
@interface CKDistributedTimestampVector : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _timestampArray;
}

@property (nonatomic, retain) NSMutableArray *timestampArray;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isGreaterThanOrEqualToTimestamp:(id)arg1;
- (void)addTimestamp:(id)arg1;
- (long long)compareToTimestampVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)indexForTimestampForSiteIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestampClockVector:(id)arg1 fillingInGaps:(bool)arg2;
- (id)initWithTimestamps:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minimalTimestampWith:(id)arg1;
- (id)sequentialSiteIdentifiers;
- (void)setTimestampArray:(id)arg1;
- (id)timestampArray;
- (id)timestampAtIndex:(unsigned long long)arg1;
- (unsigned long long)timestampCount;
- (id)timestampForSiteIdentifier:(id)arg1;
- (id)timestamps;

@end
