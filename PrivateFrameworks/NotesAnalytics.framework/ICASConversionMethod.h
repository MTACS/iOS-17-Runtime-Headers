
@interface ICASConversionMethod : NSObject <AADataType> {
    long long  _conversionMethod;
}

@property (nonatomic, readonly) long long conversionMethod;

- (long long)conversionMethod;
- (id)initWithConversionMethod:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
