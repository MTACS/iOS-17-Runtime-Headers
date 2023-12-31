
@interface FCAdStatusCondition : NSObject {
    NSString * _identifier;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long type;

+ (id)adStatusConditionsFromConditionsArray:(id)arg1;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithStatusConditionType:(unsigned long long)arg1 identifier:(id)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
