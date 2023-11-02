
@interface MIONumericConstraint : NSObject <MIOFeatureValueConstraint> {
    NSSet * _enumeratedNumbers;
    NSNumber * _maxNumber;
    NSNumber * _minNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *enumeratedNumbers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *maxNumber;
@property (nonatomic, readonly) NSNumber *minNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enumeratedNumbers;
- (unsigned long long)hash;
- (id)initWithEnumeratedNumbers:(id)arg1;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)maxNumber;
- (id)minNumber;

@end
