
@interface ICASEndMode : NSObject <AADataType> {
    long long  _endMode;
}

@property (nonatomic, readonly) long long endMode;

- (long long)endMode;
- (id)initWithEndMode:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
