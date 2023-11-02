
@interface SPOfflineAdvertisingConfiguration : NSObject <NSSecureCoding> {
    long long  _longIntervalCount;
    long long  _shortIntervalCount;
}

@property (nonatomic) long long longIntervalCount;
@property (nonatomic) long long shortIntervalCount;

+ (bool)supportsSecureCoding;

- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithShortIntervalCount:(long long)arg1 longIntervalCount:(long long)arg2;
- (long long)longIntervalCount;
- (void)setLongIntervalCount:(long long)arg1;
- (void)setShortIntervalCount:(long long)arg1;
- (long long)shortIntervalCount;

@end
