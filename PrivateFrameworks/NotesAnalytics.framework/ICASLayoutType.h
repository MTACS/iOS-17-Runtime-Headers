
@interface ICASLayoutType : NSObject <AADataType> {
    long long  _layoutType;
}

@property (nonatomic, readonly) long long layoutType;

- (id)initWithLayoutType:(long long)arg1;
- (long long)layoutType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
