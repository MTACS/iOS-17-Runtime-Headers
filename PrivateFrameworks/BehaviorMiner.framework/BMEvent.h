
@interface BMEvent : NSObject {
    NSDate * _endDate;
    BMItem * _item;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) BMItem *item;
@property (nonatomic, readonly, copy) NSDate *startDate;

- (void).cxx_destruct;
- (id)description;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 item:(id)arg3;
- (id)item;
- (id)startDate;

@end
