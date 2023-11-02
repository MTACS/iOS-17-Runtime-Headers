
@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _addOnEndpointType;
    NSString * _addOnWebsheetURL;
    bool  _applePaySupported;
    NSString * _name;
    CTPlan * _plan;
    NSString * _planPurchaseEndpointType;
    NSString * _warningText;
    NSString * _websheetURL;
}

@property (nonatomic, readonly) bool applePaySupported;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CTPlan *plan;
@property (nonatomic, readonly) NSString *planPurchaseEndpointType;
@property (nonatomic, readonly) NSString *warningText;
@property (nonatomic, readonly) NSString *websheetURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applePaySupported;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 plan:(id)arg2 url:(id)arg3 applePaySupported:(bool)arg4 responseType:(id)arg5 warningText:(id)arg6;
- (id)name;
- (id)plan;
- (id)planPurchaseEndpointType;
- (id)warningText;
- (id)websheetURL;

@end
