
@interface SKStorefront : NSObject {
    NSString * _countryCode;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)_initWithStorefront:(id)arg1;
- (id)countryCode;
- (id)description;
- (id)identifier;

@end
