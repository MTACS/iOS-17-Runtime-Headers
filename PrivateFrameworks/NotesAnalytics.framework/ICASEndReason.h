
@interface ICASEndReason : NSObject <AADataType> {
    long long  _endReason;
}

@property (nonatomic, readonly) long long endReason;

- (long long)endReason;
- (id)initWithEndReason:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
