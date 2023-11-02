
@interface ATXAppIntentDuetEvent : ATXDuetEvent <NSSecureCoding> {
    NSString * _actionType;
    NSNumber * _alogId;
    NSString * _bundleId;
    NSNumber * _paramCount;
    NSArray * _parameterHashes;
    NSArray * _slotSetHashes;
}

@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSNumber *alogId;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSNumber *paramCount;
@property (nonatomic, readonly) NSArray *parameterHashes;
@property (nonatomic, readonly) NSArray *slotSetHashes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionType;
- (id)alogId;
- (id)bundleId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBundleId:(id)arg1 actionType:(id)arg2 parameterHashes:(id)arg3 slotSetHashes:(id)arg4 paramCount:(id)arg5 startDate:(id)arg6 endDate:(id)arg7;
- (id)initWithBundleId:(id)arg1 actionType:(id)arg2 parameterHashes:(id)arg3 slotSetHashes:(id)arg4 paramCount:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 alogId:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;
- (id)paramCount;
- (id)parameterHashes;
- (id)slotSetHashes;

@end
