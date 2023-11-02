
@interface _BlastDoorLPFileMetadata : _BlastDoorLPSpecializationMetadata {
    NSDate * _creationDate;
    _BlastDoorLPImage * _icon;
    NSString * _name;
    unsigned long long  _size;
    _BlastDoorLPImage * _thumbnail;
    NSString * _type;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) _BlastDoorLPImage *icon;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) _BlastDoorLPImage *thumbnail;
@property (nonatomic, copy) NSString *type;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setCreationDate:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setType:(id)arg1;
- (unsigned long long)size;
- (id)thumbnail;
- (id)type;

@end
