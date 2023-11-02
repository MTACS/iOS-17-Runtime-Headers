
@protocol _INPBPaymentMethodList <NSObject>

@required

+ (Class)paymentMethodsType;

- (void)addPaymentMethods:(_INPBPaymentMethod *)arg1;
- (void)clearPaymentMethods;
- (_INPBCondition *)condition;
- (bool)hasCondition;
- (NSArray *)paymentMethods;
- (_INPBPaymentMethod *)paymentMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentMethodsCount;
- (void)setCondition:(_INPBCondition *)arg1;
- (void)setPaymentMethods:(NSArray *)arg1;

@end
