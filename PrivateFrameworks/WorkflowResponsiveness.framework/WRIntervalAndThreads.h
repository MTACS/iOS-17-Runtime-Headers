
@interface WRIntervalAndThreads : NSObject {
    WRTimestampAndThread * _end;
    WRTimestampAndThread * _start;
}

@property (readonly) WRTimestampAndThread *end;
@property (readonly) WRTimestampAndThread *start;

- (void).cxx_destruct;
- (id)end;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (id)start;

@end
