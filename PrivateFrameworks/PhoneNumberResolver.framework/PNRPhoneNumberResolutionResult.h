
@interface PNRPhoneNumberResolutionResult : NSObject {
    long long  _dataSource;
    NSString * _locationName;
}

@property (nonatomic, readonly) long long dataSource;
@property (nonatomic, readonly) NSString *locationName;

- (void).cxx_destruct;
- (long long)dataSource;
- (id)initWithLocationName:(id)arg1 locationDataSource:(long long)arg2;
- (id)locationName;

@end
