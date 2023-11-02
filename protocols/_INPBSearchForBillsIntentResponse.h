
@protocol _INPBSearchForBillsIntentResponse <NSObject>

@required

+ (Class)billsType;

- (void)addBills:(_INPBBillDetailsValue *)arg1;
- (NSArray *)bills;
- (_INPBBillDetailsValue *)billsAtIndex:(unsigned long long)arg1;
- (unsigned long long)billsCount;
- (void)clearBills;
- (void)setBills:(NSArray *)arg1;

@end
