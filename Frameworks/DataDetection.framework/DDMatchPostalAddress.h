
@interface DDMatchPostalAddress : DDMatch {
    NSString * _city;
    NSString * _country;
    NSString * _postalCode;
    NSString * _state;
    NSString * _street;
}

@property (nonatomic, readonly) NSString *city;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) NSString *postalCode;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) NSString *street;

- (void).cxx_destruct;
- (id)city;
- (id)country;
- (id)initWithDDScannerResult:(id)arg1;
- (id)postalCode;
- (id)state;
- (id)street;

@end
