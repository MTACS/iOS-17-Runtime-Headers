
@interface HMSettingValue : NSObject <NSCopying, NSSecureCoding> {
    NSData * _dataValue;
    NSNumber * _numberValue;
    NSUUID * _selectionIdentifier;
    NSString * _selectionValue;
    NSString * _stringValue;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSData *dataValue;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (nonatomic, readonly, copy) NSUUID *selectionIdentifier;
@property (nonatomic, readonly, copy) NSString *selectionValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initDataSettingWithValue:(id)arg1;
- (id)initNumberSettingWithValue:(id)arg1;
- (id)initStringSettingWithValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 numberValue:(id)arg3 dataValue:(id)arg4 selectionIdentifier:(id)arg5 selectionValue:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)numberValue;
- (id)selectionIdentifier;
- (id)selectionValue;
- (id)stringValue;
- (long long)type;

@end
