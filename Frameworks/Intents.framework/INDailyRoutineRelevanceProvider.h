
@interface INDailyRoutineRelevanceProvider : INRelevanceProvider {
    long long  _situation;
}

@property (nonatomic, readonly) long long situation;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSituation:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)situation;

@end
