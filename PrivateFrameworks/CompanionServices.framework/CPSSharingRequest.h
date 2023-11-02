
@interface CPSSharingRequest : CPSAuthenticationRequest <NSSecureCoding> {
    NSArray * _customSharingMethods;
    NSString * _customTitleText;
    NSData * _requestData;
}

@property (nonatomic, copy) NSArray *customSharingMethods;
@property (nonatomic, copy) NSString *customTitleText;
@property (nonatomic, readonly) NSData *requestData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authType;
- (id)customSharingMethods;
- (id)customTitleText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)requestData;
- (void)setCustomSharingMethods:(id)arg1;
- (void)setCustomTitleText:(id)arg1;

@end
