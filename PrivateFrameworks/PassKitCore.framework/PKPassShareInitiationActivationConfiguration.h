
@interface PKPassShareInitiationActivationConfiguration : NSObject {
    bool  _allowUserEdit;
    PKPassShareActivationOptions * _availableOptions;
    PKPassShareActivationOptions * _defaultOptions;
    bool  _isBlocked;
}

@property (nonatomic) bool allowUserEdit;
@property (nonatomic, retain) PKPassShareActivationOptions *availableOptions;
@property (nonatomic, retain) PKPassShareActivationOptions *defaultOptions;
@property (nonatomic) bool isBlocked;

- (void).cxx_destruct;
- (bool)allowUserEdit;
- (id)availableOptions;
- (id)defaultOptions;
- (id)description;
- (bool)isBlocked;
- (void)setAllowUserEdit:(bool)arg1;
- (void)setAvailableOptions:(id)arg1;
- (void)setDefaultOptions:(id)arg1;
- (void)setIsBlocked:(bool)arg1;

@end
