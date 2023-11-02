
@interface _BlastDoorLPSharedObjectMetadata : _BlastDoorLPSpecializationMetadata {
    _BlastDoorLPImage * _icon;
    NSString * _information;
    bool  _isCollaboration;
    _BlastDoorLPSpecializationMetadata * _specialization;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) _BlastDoorLPImage *icon;
@property (nonatomic, copy) NSString *information;
@property (nonatomic) bool isCollaboration;
@property (nonatomic, retain) _BlastDoorLPSpecializationMetadata *specialization;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)information;
- (id)initWithCoder:(id)arg1;
- (bool)isCollaboration;
- (bool)isEqual:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setInformation:(id)arg1;
- (void)setIsCollaboration:(bool)arg1;
- (void)setSpecialization:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)specialization;
- (id)subtitle;
- (id)title;

@end
