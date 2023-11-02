
@interface PPMockRTLocationOfInterestVisit : NSObject {
    NSDate * _entryDate;
    NSDate * _exitDate;
}

@property (nonatomic, retain) NSDate *entryDate;
@property (nonatomic, retain) NSDate *exitDate;

+ (id)mockLocationOfInterestVisitWithEntryDate:(id)arg1 exitDate:(id)arg2;

- (void).cxx_destruct;
- (id)entryDate;
- (id)exitDate;
- (void)setEntryDate:(id)arg1;
- (void)setExitDate:(id)arg1;

@end
