
@interface _BlastDoorLPMapCollectionMetadata : _BlastDoorLPSpecializationMetadata {
    NSArray * _addresses;
    _BlastDoorLPImage * _darkImage;
    _BlastDoorLPImage * _icon;
    _BlastDoorLPImage * _image;
    NSString * _name;
    unsigned int  _numberOfItems;
    _BlastDoorLPImage * _publisherIcon;
    NSString * _publisherName;
}

@property (nonatomic, copy) NSArray *addresses;
@property (nonatomic, retain) _BlastDoorLPImage *darkImage;
@property (nonatomic, retain) _BlastDoorLPImage *icon;
@property (nonatomic, retain) _BlastDoorLPImage *image;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int numberOfItems;
@property (nonatomic, retain) _BlastDoorLPImage *publisherIcon;
@property (nonatomic, copy) NSString *publisherName;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)addresses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkImage;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned int)numberOfItems;
- (id)publisherIcon;
- (id)publisherName;
- (void)setAddresses:(id)arg1;
- (void)setDarkImage:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfItems:(unsigned int)arg1;
- (void)setPublisherIcon:(id)arg1;
- (void)setPublisherName:(id)arg1;

@end
