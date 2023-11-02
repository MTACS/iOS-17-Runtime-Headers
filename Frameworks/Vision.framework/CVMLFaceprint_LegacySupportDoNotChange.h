
@interface CVMLFaceprint_LegacySupportDoNotChange : NSObject <NSSecureCoding> {
    NSData * _faceprint;
    NSString * _faceprintInputPath;
    NSString * _key;
    unsigned int  _platform;
    unsigned int  _profile;
}

@property (retain) NSData *faceprint;
@property (copy) NSString *faceprintInputPath;
@property (copy) NSString *key;
@property unsigned int platform;
@property unsigned int profile;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)faceprint;
- (id)faceprintInputPath;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (unsigned int)platform;
- (unsigned int)profile;
- (void)setFaceprint:(id)arg1;
- (void)setFaceprintInputPath:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setProfile:(unsigned int)arg1;

@end
