
@interface WFPollenConditions : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    unsigned long long  _grassIndex;
    unsigned long long  _ragweedIndex;
    unsigned long long  _timeOfDay;
    unsigned long long  _treeIndex;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) unsigned long long grassIndex;
@property (nonatomic) unsigned long long ragweedIndex;
@property (nonatomic) unsigned long long timeOfDay;
@property (nonatomic) unsigned long long treeIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)grassIndex;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)ragweedIndex;
- (void)setDate:(id)arg1;
- (void)setGrassIndex:(unsigned long long)arg1;
- (void)setRagweedIndex:(unsigned long long)arg1;
- (void)setTimeOfDay:(unsigned long long)arg1;
- (void)setTreeIndex:(unsigned long long)arg1;
- (unsigned long long)timeOfDay;
- (unsigned long long)treeIndex;

@end
