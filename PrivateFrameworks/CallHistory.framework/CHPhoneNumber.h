
@interface CHPhoneNumber : CHLogger {
    NSString * _digits;
    NSString * _formattedRepresentation;
    bool  _formattedRepresentationAttempted;
    NSString * _isoCountryCode;
    NSString * _normalizedRepresentation;
    bool  _normalizedRepresentationAttempted;
}

@property (nonatomic, readonly, copy) NSString *digits;
@property (nonatomic, readonly, copy) NSString *formattedRepresentation;
@property (nonatomic) bool formattedRepresentationAttempted;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, readonly, copy) NSString *normalizedRepresentation;
@property (nonatomic) bool normalizedRepresentationAttempted;

- (void).cxx_destruct;
- (id)digits;
- (id)formattedRepresentation;
- (bool)formattedRepresentationAttempted;
- (id)initWithDigits:(id)arg1 isoCountryCode:(id)arg2;
- (id)isoCountryCode;
- (id)normalizedRepresentation;
- (bool)normalizedRepresentationAttempted;
- (void)setFormattedRepresentationAttempted:(bool)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setNormalizedRepresentationAttempted:(bool)arg1;

@end
