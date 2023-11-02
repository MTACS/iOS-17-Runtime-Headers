
@interface HREActionVariance : HRERule {
    NSString * _key;
}

@property (nonatomic, readonly) NSString *key;

+ (id)varianceKeyForAction:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithKey:(id)arg1;
- (id)key;
- (bool)passesForAction:(id)arg1;

@end
