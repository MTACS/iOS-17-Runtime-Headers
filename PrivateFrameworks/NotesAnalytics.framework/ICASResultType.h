
@interface ICASResultType : NSObject <AADataType> {
    long long  _resultType;
}

@property (nonatomic, readonly) long long resultType;

- (id)initWithResultType:(long long)arg1;
- (long long)resultType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
