
@interface GEOInlineRapEnablement : NSObject {
    GEOPDInlineRapEnablement * _inlineRapEnablement;
}

@property (nonatomic, readonly) bool isAddressEditable;
@property (nonatomic, readonly) bool isEditable;
@property (nonatomic, readonly) bool isHoursEditable;
@property (nonatomic, readonly) bool isPhoneEditable;
@property (nonatomic, readonly) bool isWebsiteEditable;

- (void).cxx_destruct;
- (id)initWithEnablement:(id)arg1;
- (bool)isAddressEditable;
- (bool)isEditable;
- (bool)isHoursEditable;
- (bool)isPhoneEditable;
- (bool)isWebsiteEditable;

@end
