
@interface CRFDRRCHL : NSObject {
    NSSet * _dataClasses;
    NSSet * _properties;
    NSString * _repairCenter;
    NSDate * _repairDate;
    NSString * _repairDateStr;
}

@property (nonatomic, retain) NSSet *dataClasses;
@property (nonatomic, retain) NSSet *properties;
@property (nonatomic, retain) NSString *repairCenter;
@property (nonatomic, retain) NSDate *repairDate;
@property (nonatomic, retain) NSString *repairDateStr;

- (void).cxx_destruct;
- (id)dataClasses;
- (id)description;
- (id)init;
- (id)initWithrepairDateStr:(id)arg1 repairDate:(id)arg2 repairCenter:(id)arg3 dataClasses:(id)arg4 properties:(id)arg5;
- (id)properties;
- (id)repairCenter;
- (id)repairDate;
- (id)repairDateStr;
- (void)setDataClasses:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRepairCenter:(id)arg1;
- (void)setRepairDate:(id)arg1;
- (void)setRepairDateStr:(id)arg1;

@end
