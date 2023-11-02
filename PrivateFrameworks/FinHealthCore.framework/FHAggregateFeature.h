
@interface FHAggregateFeature : NSObject <NSSecureCoding> {
    NSString * _name;
    NSDate * _processingWindowEndDate;
    NSDate * _processingWindowStartDate;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSDate *processingWindowEndDate;
@property (nonatomic, copy) NSDate *processingWindowStartDate;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)processingWindowEndDate;
- (id)processingWindowStartDate;
- (void)setName:(id)arg1;
- (void)setProcessingWindowEndDate:(id)arg1;
- (void)setProcessingWindowStartDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
