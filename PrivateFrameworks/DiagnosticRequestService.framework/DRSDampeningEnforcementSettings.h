
@interface DRSDampeningEnforcementSettings : NSObject {
    bool  _enforcesResourceCap;
    bool  _enforcesResourceDownsampling;
    bool  _enforcesResourceHysteresis;
    bool  _enforcesSignatureCap;
    bool  _enforcesSignatureDownsampling;
    bool  _enforcesSignatureHysteresis;
    bool  _enforcesTotalCap;
}

@property (nonatomic) bool enforcesResourceCap;
@property (nonatomic) bool enforcesResourceDownsampling;
@property (nonatomic) bool enforcesResourceHysteresis;
@property (nonatomic) bool enforcesSignatureCap;
@property (nonatomic) bool enforcesSignatureDownsampling;
@property (nonatomic) bool enforcesSignatureHysteresis;
@property (nonatomic) bool enforcesTotalCap;

- (id)_moRepresentation:(id)arg1;
- (id)debugDescription;
- (bool)enforcesResourceCap;
- (bool)enforcesResourceDownsampling;
- (bool)enforcesResourceHysteresis;
- (bool)enforcesSignatureCap;
- (bool)enforcesSignatureDownsampling;
- (bool)enforcesSignatureHysteresis;
- (bool)enforcesTotalCap;
- (id)init;
- (id)initWithMO:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonCompatibleDictRepresentation;
- (void)setAllEnforcement:(bool)arg1;
- (void)setEnforcesResourceCap:(bool)arg1;
- (void)setEnforcesResourceDownsampling:(bool)arg1;
- (void)setEnforcesResourceHysteresis:(bool)arg1;
- (void)setEnforcesSignatureCap:(bool)arg1;
- (void)setEnforcesSignatureDownsampling:(bool)arg1;
- (void)setEnforcesSignatureHysteresis:(bool)arg1;
- (void)setEnforcesTotalCap:(bool)arg1;

@end
