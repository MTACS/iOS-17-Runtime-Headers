
@interface LPKUserSwitchEvent : NSObject {
    NSDate * _endDate;
    NSMutableDictionary * _signposts;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSMutableDictionary *signposts;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (id)init;
- (void)setEndDate:(id)arg1;
- (void)setSignposts:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)signposts;
- (id)startDate;

@end
