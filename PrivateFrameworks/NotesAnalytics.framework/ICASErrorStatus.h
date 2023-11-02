
@interface ICASErrorStatus : NSObject <AADataType> {
    long long  _errorStatus;
}

@property (nonatomic, readonly) long long errorStatus;

- (long long)errorStatus;
- (id)initWithErrorStatus:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
