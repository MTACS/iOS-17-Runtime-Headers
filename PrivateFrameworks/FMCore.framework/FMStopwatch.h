
@interface FMStopwatch : NSObject {
    NSString * _comment;
    unsigned long long  _endTime;
    NSString * _label;
    unsigned long long  _startTime;
}

@property (nonatomic, copy) NSString *comment;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long startTime;

+ (void)dumpBuffer:(id)arg1;
+ (void)eventWithLabel:(id)arg1;
+ (void)eventWithLabel:(id)arg1 comment:(id)arg2;
+ (id)illegalLabelCharacterSet;
+ (void)initialize;
+ (id)stopwatchWithLabel:(id)arg1;

- (void).cxx_destruct;
- (id)comment;
- (id)description;
- (id)descriptionAsData;
- (unsigned long long)endTime;
- (id)initWithLabel:(id)arg1;
- (id)label;
- (void)setComment:(id)arg1;
- (void)setEndTime:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)startTime;
- (void)stop;
- (void)stopWithComment:(id)arg1;

@end
