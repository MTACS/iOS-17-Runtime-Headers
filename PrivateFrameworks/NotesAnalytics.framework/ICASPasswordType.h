
@interface ICASPasswordType : NSObject <AADataType> {
    long long  _passwordType;
}

@property (nonatomic, readonly) long long passwordType;

- (id)initWithPasswordType:(long long)arg1;
- (long long)passwordType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
