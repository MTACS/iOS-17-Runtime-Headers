
@interface CBABCurveConfiguration : NSObject {
    bool  _isBuiltin;
    bool  _isEnergySaving;
    NSNumber * _maxBrightness;
    NSNumber * _productID;
    NSString * _uuid;
    NSNumber * _vendorID;
}

@property (nonatomic) bool isBuiltin;
@property (nonatomic) bool isEnergySaving;
@property (nonatomic, retain) NSNumber *maxBrightness;
@property (nonatomic, retain) NSNumber *productID;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) NSNumber *vendorID;

- (void)dealloc;
- (id)description;
- (bool)isBuiltin;
- (bool)isEnergySaving;
- (id)maxBrightness;
- (id)productID;
- (void)setIsBuiltin:(bool)arg1;
- (void)setIsEnergySaving:(bool)arg1;
- (void)setMaxBrightness:(id)arg1;
- (void)setProductID:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVendorID:(id)arg1;
- (id)uuid;
- (id)vendorID;

@end
