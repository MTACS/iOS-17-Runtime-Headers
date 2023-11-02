
@interface HFPropertyDifference : HFDifference {
    id  _valueA;
    id  _valueB;
}

@property (nonatomic, retain) id valueA;
@property (nonatomic, retain) id valueB;

+ (id)compareObjectA:(id)arg1 toObjectB:(id)arg2 key:(id)arg3 priority:(unsigned long long)arg4;
+ (bool)object:(id)arg1 isEqualToObject:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilder;
- (id)initWithObjectA:(id)arg1 toObjectB:(id)arg2 key:(id)arg3 priority:(unsigned long long)arg4;
- (void)setValueA:(id)arg1;
- (void)setValueB:(id)arg1;
- (id)valueA;
- (id)valueB;

@end
