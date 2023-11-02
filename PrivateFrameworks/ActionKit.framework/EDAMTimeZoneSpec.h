
@interface EDAMTimeZoneSpec : FATObject {
    NSNumber * _dstSavingsAdjustmentMillis;
    NSString * _id;
    NSNumber * _nextEnterDaylightSavings;
    NSNumber * _nextLeaveDaylightSavings;
    NSNumber * _rawUTCOffsetMillis;
}

@property (nonatomic, retain) NSNumber *dstSavingsAdjustmentMillis;
@property (nonatomic, retain) NSString *id;
@property (nonatomic, retain) NSNumber *nextEnterDaylightSavings;
@property (nonatomic, retain) NSNumber *nextLeaveDaylightSavings;
@property (nonatomic, retain) NSNumber *rawUTCOffsetMillis;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)dstSavingsAdjustmentMillis;
- (id)id;
- (id)nextEnterDaylightSavings;
- (id)nextLeaveDaylightSavings;
- (id)rawUTCOffsetMillis;
- (void)setDstSavingsAdjustmentMillis:(id)arg1;
- (void)setId:(id)arg1;
- (void)setNextEnterDaylightSavings:(id)arg1;
- (void)setNextLeaveDaylightSavings:(id)arg1;
- (void)setRawUTCOffsetMillis:(id)arg1;

@end
