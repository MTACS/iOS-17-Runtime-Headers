
@interface ICASContextPath : NSObject <AADataType> {
    long long  _contextPath;
}

@property (nonatomic, readonly) long long contextPath;

- (long long)contextPath;
- (id)initWithContextPath:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
