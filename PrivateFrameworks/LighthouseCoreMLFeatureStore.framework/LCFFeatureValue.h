
@interface LCFFeatureValue : NSObject {
    NSNumber * _boolValue;
    NSArray * _doubleArray;
    NSNumber * _doubleValue;
    NSNumber * _intValue;
    NSString * _stringValue;
    NSNumber * _timeBucketValue;
    long long  _type;
    NSString * _valueInString;
}

@property (nonatomic, readonly) NSNumber *boolValue;
@property (nonatomic, readonly) NSArray *doubleArray;
@property (nonatomic, readonly) NSNumber *doubleValue;
@property (nonatomic, readonly) NSNumber *intValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) NSNumber *timeBucketValue;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *valueInString;

- (void).cxx_destruct;
- (id)boolValue;
- (id)doubleArray;
- (id)doubleValue;
- (id)getTypeDBString;
- (id)initEmpty;
- (id)initWithBoolValue:(id)arg1;
- (id)initWithDoubleArray:(id)arg1;
- (id)initWithDoubleValue:(id)arg1;
- (id)initWithIntValue:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)initWithTimeBucketValue:(id)arg1;
- (id)intValue;
- (bool)isNullValue;
- (id)stringValue;
- (id)timeBucketValue;
- (long long)type;
- (id)valueInString;

@end
