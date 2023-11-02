
@interface TRSetupActivationResponse : TRResponseMessage {
    bool  _activated;
    NSError * _error;
}

@property (nonatomic) bool activated;
@property (nonatomic, retain) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)activated;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (void)setActivated:(bool)arg1;
- (void)setError:(id)arg1;

@end
