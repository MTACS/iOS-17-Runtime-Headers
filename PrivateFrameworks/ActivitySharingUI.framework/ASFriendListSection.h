
@interface ASFriendListSection : NSObject {
    NSArray * _rows;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, retain) NSArray *rows;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (bool)containsFriendListRow:(id)arg1;
- (id)endDate;
- (id)initWithDate:(id)arg1 andRows:(id)arg2;
- (id)rows;
- (void)setRows:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
