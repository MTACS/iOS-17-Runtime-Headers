
@interface ICJSSign : NSObject {
    ICJSSignConfiguration * _configuration;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (id)signatureDataWithURLRequest:(id)arg1;
- (id)signatureStringWithURLRequest:(id)arg1;

@end
