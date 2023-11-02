
@interface _BlastDoorLPiCloudFamilyInvitationMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _action;
    _BlastDoorLPImage * _icon;
    _BlastDoorLPImage * _image;
    NSString * _kind;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, retain) _BlastDoorLPImage *icon;
@property (nonatomic, retain) _BlastDoorLPImage *image;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (void)setAction:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
