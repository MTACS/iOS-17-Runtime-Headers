
@interface TRFetchAnisetteDataRequest : TRRequestMessage {
    bool  _shouldProvision;
}

@property (nonatomic) bool shouldProvision;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShouldProvision:(bool)arg1;
- (bool)shouldProvision;

@end
