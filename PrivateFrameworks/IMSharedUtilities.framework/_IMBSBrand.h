
@interface _IMBSBrand : IMBrand

- (id)_init;
- (id)_initWithBSBrand:(id)arg1;
- (id)brandURI;
- (bool)isVerified;
- (id)localizedResponseTime;
- (id)name;
- (id)primaryPhoneNumber;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

@end
