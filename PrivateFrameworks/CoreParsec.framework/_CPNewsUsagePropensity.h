
@interface _CPNewsUsagePropensity : PBCodable <NSSecureCoding, _CPNewsUsagePropensity> {
    float  _other;
    int  _totalEngagements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float other;
@property (readonly) Class superclass;
@property (nonatomic) int totalEngagements;

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)other;
- (bool)readFrom:(id)arg1;
- (void)setOther:(float)arg1;
- (void)setTotalEngagements:(int)arg1;
- (int)totalEngagements;
- (void)writeTo:(id)arg1;

@end
