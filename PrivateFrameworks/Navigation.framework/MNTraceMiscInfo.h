
@interface MNTraceMiscInfo : NSObject {
    double  _doubleValue;
    long long  _intValue;
    NSString * _key;
    NSString * _stringValue;
}

@property (nonatomic) double doubleValue;
@property (nonatomic) long long intValue;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *stringValue;

- (void).cxx_destruct;
- (double)doubleValue;
- (long long)intValue;
- (id)key;
- (void)setDoubleValue:(double)arg1;
- (void)setIntValue:(long long)arg1;
- (void)setKey:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
