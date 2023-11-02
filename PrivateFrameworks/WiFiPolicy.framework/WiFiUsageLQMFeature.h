
@interface WiFiUsageLQMFeature : NSObject {
    NSString * _fieldName;
    bool  _isPerSecond;
    NSNumber * _median;
}

@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic) bool isPerSecond;
@property (nonatomic, retain) NSNumber *median;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fieldName;
- (id)initWithField:(id)arg1 andPerSecond:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPerSecond;
- (id)median;
- (void)setFieldName:(id)arg1;
- (void)setIsPerSecond:(bool)arg1;
- (void)setMedian:(id)arg1;

@end
