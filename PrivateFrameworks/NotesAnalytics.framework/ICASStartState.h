
@interface ICASStartState : NSObject <AADataType> {
    long long  _startState;
}

@property (nonatomic, readonly) long long startState;

- (id)initWithStartState:(long long)arg1;
- (long long)startState;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
