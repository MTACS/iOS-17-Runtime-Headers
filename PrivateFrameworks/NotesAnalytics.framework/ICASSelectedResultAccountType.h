
@interface ICASSelectedResultAccountType : NSObject <AADataType> {
    long long  _selectedResultAccountType;
}

@property (nonatomic, readonly) long long selectedResultAccountType;

- (id)initWithSelectedResultAccountType:(long long)arg1;
- (long long)selectedResultAccountType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
