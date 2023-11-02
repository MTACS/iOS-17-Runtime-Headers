
@interface MTIDSecret : NSObject <NSSecureCoding> {
    NSDate * _effectiveDate;
    NSDate * _expirationDate;
    bool  _isSynchronized;
    NSString * _syncStatusCode;
    NSString * _value;
}

@property (nonatomic, copy) NSDate *effectiveDate;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic) bool isSynchronized;
@property (nonatomic, retain) NSString *syncStatusCode;
@property (nonatomic, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugInfo;
- (id)description;
- (id)effectiveDate;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 effectiveDate:(id)arg2 expirationDate:(id)arg3 isSynchronize:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSynchronized;
- (void)setEffectiveDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsSynchronized:(bool)arg1;
- (void)setSyncStatusCode:(id)arg1;
- (void)setValue:(id)arg1;
- (id)syncStatusCode;
- (id)value;

@end
