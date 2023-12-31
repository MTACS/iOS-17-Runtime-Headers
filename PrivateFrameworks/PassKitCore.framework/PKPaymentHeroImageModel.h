
@interface PKPaymentHeroImageModel : NSObject {
    NSString * _imageSha;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *imageSha;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)imageSha;
- (id)initWithDictionary:(id)arg1;
- (id)url;

@end
