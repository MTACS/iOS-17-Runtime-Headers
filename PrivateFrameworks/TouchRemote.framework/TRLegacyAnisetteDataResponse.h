
@interface TRLegacyAnisetteDataResponse : TRResponseMessage {
    AKAnisetteData * _anisetteData;
}

@property (nonatomic, copy) AKAnisetteData *anisetteData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anisetteData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAnisetteData:(id)arg1;

@end
