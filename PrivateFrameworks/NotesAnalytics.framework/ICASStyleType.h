
@interface ICASStyleType : NSObject <AADataType> {
    long long  _styleType;
}

@property (nonatomic, readonly) long long styleType;

- (id)initWithStyleType:(long long)arg1;
- (long long)styleType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
