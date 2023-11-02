
@interface PRSRankingRenderAndEngagementValues : NSObject <NSCopying, NSSecureCoding> {
    short  _engagementValues;
    short  _renderValues;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getRankingValues:(short*)arg1 withRankingValueSize:(unsigned long long)arg2 forType:(int)arg3;
- (void)incrementRankingValuesForType:(int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setRankingValues:(short)arg1 forType:(int)arg2;

@end
