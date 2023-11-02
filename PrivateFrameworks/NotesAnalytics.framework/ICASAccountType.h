
@interface ICASAccountType : NSObject <AADataType> {
    long long  _accountType;
}

@property (nonatomic, readonly) long long accountType;

- (long long)accountType;
- (id)initWithAccountType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
