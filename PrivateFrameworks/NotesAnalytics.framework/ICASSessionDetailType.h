
@interface ICASSessionDetailType : NSObject <AADataType> {
    long long  _sessionDetailType;
}

@property (nonatomic, readonly) long long sessionDetailType;

- (id)initWithSessionDetailType:(long long)arg1;
- (long long)sessionDetailType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
