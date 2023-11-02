
@interface PSGStructuredInfoSuggestion : NSObject <NSCopying, NSSecureCoding> {
    PSGOperationalPredictedItem * _operationalItem;
    PPQuickTypeItem * _portraitItem;
    PSGProactiveTrigger * _proactiveTrigger;
}

@property (nonatomic, readonly) PSGOperationalPredictedItem *operationalItem;
@property (nonatomic, readonly) PPQuickTypeItem *portraitItem;
@property (nonatomic, readonly) PSGProactiveTrigger *proactiveTrigger;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProactiveTrigger:(id)arg1 portraitItem:(id)arg2 operationalItem:(id)arg3;
- (bool)isApplePay;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (id)operationalItem;
- (id)portraitItem;
- (id)predictedValue;
- (id)proactiveTrigger;

@end
