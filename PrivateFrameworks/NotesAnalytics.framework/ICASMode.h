
@interface ICASMode : NSObject <AADataType> {
    long long  _mode;
}

@property (nonatomic, readonly) long long mode;

- (id)initWithMode:(long long)arg1;
- (long long)mode;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
