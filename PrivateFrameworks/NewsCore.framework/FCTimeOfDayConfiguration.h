
@interface FCTimeOfDayConfiguration : NSObject {
    long long  _end;
    long long  _start;
}

@property (nonatomic, readonly) long long end;
@property (nonatomic, readonly) long long start;

- (id)description;
- (long long)end;
- (id)initWithDictionary:(id)arg1;
- (long long)start;

@end
