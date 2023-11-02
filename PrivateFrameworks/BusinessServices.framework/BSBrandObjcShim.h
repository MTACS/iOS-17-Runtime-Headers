
@interface BSBrandObjcShim : NSObject {
    void brand;
    void messagingDetails;
}

@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) bool isVerified;
@property (nonatomic, readonly) BSBrandMessagingDetailsObjcShim *messagingDetails;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *primaryBrandColorHexString;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) NSString *secondaryBrandColorHexString;

+ (id)placeholderName;

- (void).cxx_destruct;
- (id)brandURI;
- (id)init;
- (bool)isVerified;
- (id)messagingDetails;
- (id)name;
- (id)primaryBrandColorHexString;
- (id)primaryPhoneNumber;
- (id)secondaryBrandColorHexString;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

@end
