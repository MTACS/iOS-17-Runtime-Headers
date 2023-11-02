
@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding> {
    bool  _activationForMms;
    bool  _dataActive;
    bool  _isDataAttached;
    NSNumber * _pdpContextId;
}

@property (nonatomic) bool activationForMms;
@property (nonatomic) bool dataActive;
@property (nonatomic) bool isDataAttached;
@property (nonatomic, retain) NSNumber *pdpContextId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)activationForMms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dataActive;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDataAttached;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTMmsRegistrationFailureInfoType:(id)arg1;
- (id)pdpContextId;
- (void)setActivationForMms:(bool)arg1;
- (void)setDataActive:(bool)arg1;
- (void)setIsDataAttached:(bool)arg1;
- (void)setPdpContextId:(id)arg1;

@end
