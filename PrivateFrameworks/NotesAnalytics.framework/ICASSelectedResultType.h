
@interface ICASSelectedResultType : NSObject <AADataType> {
    long long  _selectedResultType;
}

@property (nonatomic, readonly) long long selectedResultType;

- (id)initWithSelectedResultType:(long long)arg1;
- (long long)selectedResultType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
