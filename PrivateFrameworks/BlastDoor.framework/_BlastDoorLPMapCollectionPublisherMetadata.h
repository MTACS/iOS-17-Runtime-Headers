
@interface _BlastDoorLPMapCollectionPublisherMetadata : _BlastDoorLPSpecializationMetadata {
    _BlastDoorLPImage * _icon;
    NSString * _name;
    unsigned int  _numberOfPublishedCollections;
}

@property (nonatomic, retain) _BlastDoorLPImage *icon;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int numberOfPublishedCollections;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned int)numberOfPublishedCollections;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfPublishedCollections:(unsigned int)arg1;

@end
