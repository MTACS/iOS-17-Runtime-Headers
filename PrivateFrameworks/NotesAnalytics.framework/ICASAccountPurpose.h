
@interface ICASAccountPurpose : NSObject <AADataType> {
    long long  _accountPurpose;
}

@property (nonatomic, readonly) long long accountPurpose;

- (long long)accountPurpose;
- (id)initWithAccountPurpose:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
