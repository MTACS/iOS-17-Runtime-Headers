
@interface PGHolidayDetectionCache : NSObject {
    NSMutableArray * _holidayDateNodes;
    NSMutableArray * _negativelyClassifiedMomentNodes;
    NSMutableArray * _positivelyClassifiedMomentNodes;
}

@property (nonatomic, readonly) NSArray *holidayDateNodes;
@property (nonatomic, readonly) NSArray *negativelyClassifiedMomentNodes;
@property (nonatomic, readonly) NSArray *positivelyClassifiedMomentNodes;

- (void).cxx_destruct;
- (void)addHolidayWithDateNode:(id)arg1;
- (void)addNegativelyClassifiedMomentNode:(id)arg1;
- (void)addPositivelyClassifiedMomentNode:(id)arg1;
- (id)holidayDateNodes;
- (id)init;
- (id)negativelyClassifiedMomentNodes;
- (id)positivelyClassifiedMomentNodes;

@end
