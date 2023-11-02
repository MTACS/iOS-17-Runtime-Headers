
@interface TRIStopwatch : NSObject {
    unsigned long long  _start_time;
}

+ (id)start;

- (unsigned long long)elapsed_ms;
- (id)init;

@end
