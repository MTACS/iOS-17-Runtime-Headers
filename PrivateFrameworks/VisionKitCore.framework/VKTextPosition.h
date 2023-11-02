
@interface VKTextPosition : VKBaseTextPosition {
    long long  _offset;
}

@property (nonatomic) long long offset;

+ (id)positionWithOffset:(long long)arg1;
+ (id)zeroPosition;

- (id)description;
- (id)initWithOffset:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)offset;
- (id)positionByAddingOffset:(long long)arg1;
- (void)setOffset:(long long)arg1;
- (id)summaryDescription;

@end
