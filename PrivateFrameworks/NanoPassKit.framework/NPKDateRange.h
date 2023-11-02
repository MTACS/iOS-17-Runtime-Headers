
@interface NPKDateRange : NSObject <NPKDateRange> {
    NSDate * _expiryDate;
    NSString * _expiryDateString;
    NSDate * _startDate;
    NSString * _startDateString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *expiryDateString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *startDateString;
@property (readonly) Class superclass;

+ (id)_dateStringWithDate:(id)arg1 style:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)expiryDate;
- (id)expiryDateString;
- (id)initWithStartDate:(id)arg1 expirationDate:(id)arg2 formatterStyle:(unsigned long long)arg3;
- (id)startDate;
- (id)startDateString;

@end
