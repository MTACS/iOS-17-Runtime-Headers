
@interface SGPostalAddressExtraction : NSObject {
    SGPostalAddressComponents * _components;
    NSString * _plainText;
}

@property (nonatomic, readonly) SGPostalAddressComponents *components;
@property (nonatomic, readonly) NSString *plainText;

- (void).cxx_destruct;
- (id)components;
- (bool)hasExtraction;
- (id)initWithPlainText:(id)arg1 components:(id)arg2;
- (id)plainText;

@end
