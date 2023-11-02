
@interface ICASClickContext : NSObject <AADataType> {
    long long  _clickContext;
}

@property (nonatomic, readonly) long long clickContext;

- (long long)clickContext;
- (id)initWithClickContext:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
