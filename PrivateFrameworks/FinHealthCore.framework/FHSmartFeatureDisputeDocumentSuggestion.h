
@interface FHSmartFeatureDisputeDocumentSuggestion : NSObject <NSSecureCoding> {
    NSString * _UUID;
    NSDecimalNumber * _rankScore;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *UUID;
@property (nonatomic, copy) NSDecimalNumber *rankScore;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_initWithUUID:(id)arg1 rankScore:(id)arg2 type:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRankedValue:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)rankScore;
- (void)setRankScore:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUUID:(id)arg1;
- (unsigned long long)type;

@end
