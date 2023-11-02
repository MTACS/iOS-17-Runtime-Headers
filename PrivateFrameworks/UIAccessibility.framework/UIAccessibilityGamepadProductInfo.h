
@interface UIAccessibilityGamepadProductInfo : NSObject <GCControllerProductInfo> {
    GCController * _accessibilityController;
    NSNumber * _attachedToDevice;
    NSUUID * _identifier;
    NSDictionary * _miscellaneous;
}

@property (nonatomic, retain) GCController *accessibilityController;
@property (readonly, copy) NSString *anonymizedIdentifier;
@property (getter=isAttachedToDevice, nonatomic, readonly, copy) NSNumber *attachedToDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *detailedProductCategory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) NSDictionary *miscellaneous;
@property (nonatomic, readonly, copy) NSString *productCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *vendorName;

- (void).cxx_destruct;
- (id)accessibilityController;
- (id)anonymizedIdentifier;
- (id)detailedProductCategory;
- (id)identifier;
- (id)init;
- (id)isAttachedToDevice;
- (id)miscellaneous;
- (id)productCategory;
- (void)setAccessibilityController:(id)arg1;
- (void)setController:(id)arg1;
- (void)setMiscellaneous:(id)arg1;
- (id)vendorName;

@end
