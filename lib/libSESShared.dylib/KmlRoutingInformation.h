
@interface KmlRoutingInformation : NSObject {
    NSString * _brand;
    NSString * _manufacturer;
    NSString * _readerIdentifier;
    NSString * _regionString;
}

@property (nonatomic, readonly) NSString *brand;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *readerIdentifier;
@property (nonatomic, readonly) NSString *regionString;

- (void).cxx_destruct;
- (id)brand;
- (id)getReaderInformation;
- (id)getRoutingInformation;
- (id)initWithInformation:(id)arg1 readerIdentifier:(id)arg2;
- (id)initWithReaderInformation:(id)arg1;
- (id)manufacturer;
- (id)readerIdentifier;
- (id)regionString;

@end
