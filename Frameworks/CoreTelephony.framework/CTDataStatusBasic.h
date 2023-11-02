
@interface CTDataStatusBasic : NSObject <NSCopying, NSSecureCoding> {
    bool  _attached;
    bool  _cellularDataPossible;
    bool  _hasIndicator;
    bool  _inHomeCountry;
    bool  _newRadioCoverage;
    bool  _roamAllowed;
}

@property (nonatomic) bool attached;
@property (nonatomic) bool cellularDataPossible;
@property (nonatomic) bool hasIndicator;
@property (nonatomic) bool inHomeCountry;
@property (nonatomic) bool newRadioCoverage;
@property (nonatomic) bool roamAllowed;

+ (bool)supportsSecureCoding;

- (bool)attached;
- (bool)cellularDataPossible;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIndicator;
- (bool)inHomeCountry;
- (id)initWithCoder:(id)arg1;
- (bool)newRadioCoverage;
- (bool)roamAllowed;
- (void)setAttached:(bool)arg1;
- (void)setCellularDataPossible:(bool)arg1;
- (void)setHasIndicator:(bool)arg1;
- (void)setInHomeCountry:(bool)arg1;
- (void)setNewRadioCoverage:(bool)arg1;
- (void)setRoamAllowed:(bool)arg1;

@end
