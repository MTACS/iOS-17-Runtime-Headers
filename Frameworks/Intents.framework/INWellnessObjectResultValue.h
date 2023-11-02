
@interface INWellnessObjectResultValue : NSObject <NSCopying, NSSecureCoding> {
    INDateComponentsRange * _recordDate;
    long long  _resultType;
    NSString * _unit;
    NSArray * _values;
}

@property (nonatomic, readonly, copy) INDateComponentsRange *recordDate;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly, copy) NSString *unit;
@property (nonatomic, readonly, copy) NSArray *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordDate:(id)arg1 unit:(id)arg2 values:(id)arg3 resultType:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)recordDate;
- (long long)resultType;
- (id)unit;
- (id)values;

@end
