
@interface TRSetupNetworkResponse : TRResponseMessage {
    bool  _hasNetwork;
}

@property (nonatomic) bool hasNetwork;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNetwork;
- (id)initWithCoder:(id)arg1;
- (void)setHasNetwork:(bool)arg1;

@end
