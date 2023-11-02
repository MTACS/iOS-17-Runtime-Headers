
@interface AMSCarrierMSISDNProvider : NSObject <AMSCarrierMSISDNProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *msisdn;
@property (readonly) Class superclass;

- (id)msisdn;

@end
