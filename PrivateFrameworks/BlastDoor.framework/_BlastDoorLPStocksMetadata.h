
@interface _BlastDoorLPStocksMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _combinedTitle;
    NSString * _footnote;
    _BlastDoorLPImage * _icon;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *combinedTitle;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, retain) _BlastDoorLPImage *icon;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)combinedTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)footnote;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCombinedTitle:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
