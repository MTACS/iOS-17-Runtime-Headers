
@interface _DASLogEntry : NSObject {
    NSString * _category;
    NSDate * _date;
    NSString * _message;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *message;

+ (id)logEntryForDate:(id)arg1 category:(id)arg2 message:(id)arg3;

- (void).cxx_destruct;
- (id)category;
- (id)date;
- (id)description;
- (id)message;
- (void)setCategory:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setMessage:(id)arg1;

@end
