
@interface NSLayoutPointRule : NSObject <NSLayoutRule> {
    NSLayoutPoint * _firstLayoutPoint;
    NSLayoutPoint * _secondLayoutPoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutPoint *firstLayoutPoint;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly, copy) NSLayoutPoint *secondLayoutPoint;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)firstLayoutPoint;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)makeChildRules;
- (id)ruleDescription;
- (id)secondLayoutPoint;

@end
