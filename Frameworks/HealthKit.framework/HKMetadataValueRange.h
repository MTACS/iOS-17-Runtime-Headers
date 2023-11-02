
@interface HKMetadataValueRange : NSObject <NSCopying> {
    id  _maxValue;
    id  _minValue;
}

@property (nonatomic, readonly, copy) id maxValue;
@property (nonatomic, readonly, copy) id minValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)maxValue;
- (id)minValue;

@end
