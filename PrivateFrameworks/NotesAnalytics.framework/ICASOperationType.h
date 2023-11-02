
@interface ICASOperationType : NSObject <AADataType> {
    long long  _operationType;
}

@property (nonatomic, readonly) long long operationType;

- (id)initWithOperationType:(long long)arg1;
- (long long)operationType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
