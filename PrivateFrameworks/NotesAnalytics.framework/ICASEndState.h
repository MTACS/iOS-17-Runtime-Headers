
@interface ICASEndState : NSObject <AADataType> {
    long long  _endState;
}

@property (nonatomic, readonly) long long endState;

- (long long)endState;
- (id)initWithEndState:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
