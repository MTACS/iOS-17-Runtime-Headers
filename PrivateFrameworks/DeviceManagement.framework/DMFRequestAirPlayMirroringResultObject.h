
@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject {
    unsigned long long  _status;
}

@property (nonatomic, readonly) unsigned long long status;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
