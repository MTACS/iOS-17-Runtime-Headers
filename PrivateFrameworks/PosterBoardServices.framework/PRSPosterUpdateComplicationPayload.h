
@interface PRSPosterUpdateComplicationPayload : PRSPosterUpdatePayload <NSSecureCoding> {
    NSDictionary * _ambientWidgets;
    NSArray * _complications;
}

@property (nonatomic, readonly) NSDictionary *ambientWidgets;
@property (nonatomic, readonly) NSArray *complications;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ambientWidgets;
- (id)complications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAmbientWidgets:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplications:(id)arg1;
- (id)rawValue;

@end
