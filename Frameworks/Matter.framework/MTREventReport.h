
@interface MTREventReport : NSObject {
    NSError * _error;
    NSNumber * _eventNumber;
    unsigned long long  _eventTimeType;
    MTREventPath * _path;
    NSNumber * _priority;
    double  _systemUpTime;
    NSDate * _timestampDate;
    NSNumber * _timestampValue;
    id  _value;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) NSNumber *eventNumber;
@property (nonatomic, readonly) unsigned long long eventTimeType;
@property (nonatomic, readonly, copy) MTREventPath *path;
@property (nonatomic, readonly, copy) NSNumber *priority;
@property (nonatomic, readonly) double systemUpTime;
@property (nonatomic, readonly, copy) NSNumber *timestamp;
@property (nonatomic, readonly, copy) NSDate *timestampDate;
@property (nonatomic, readonly, copy) id value;

+ (void)initialize;

- (void).cxx_destruct;
- (id)error;
- (id)eventNumber;
- (unsigned long long)eventTimeType;
- (id)initWithPath:(const struct ConcreteEventPath { unsigned short x1; bool x2; unsigned int x3; unsigned int x4; }*)arg1 error:(id)arg2;
- (id)initWithPath:(const struct ConcreteEventPath { unsigned short x1; bool x2; unsigned int x3; unsigned int x4; }*)arg1 eventNumber:(id)arg2 priority:(unsigned char)arg3 timestamp:(const struct Timestamp { unsigned char x1; unsigned long long x2; }*)arg4 value:(id)arg5;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)path;
- (id)priority;
- (double)systemUpTime;
- (id)timestamp;
- (id)timestampDate;
- (id)value;

@end
