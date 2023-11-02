
@interface ICASSessionType : NSObject <AADataType> {
    long long  _sessionType;
}

@property (nonatomic, readonly) long long sessionType;

- (id)initWithSessionType:(long long)arg1;
- (long long)sessionType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
