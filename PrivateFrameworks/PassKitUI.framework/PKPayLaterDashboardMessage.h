
@interface PKPayLaterDashboardMessage : NSObject {
    NSDate * _date;
    PKDashboardPassMessage * _message;
    long long  _priority;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) PKDashboardPassMessage *message;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)date;
- (id)initWithMessage:(id)arg1 priority:(long long)arg2 date:(id)arg3;
- (id)message;
- (long long)priority;
- (void)setPriority:(long long)arg1;

@end
