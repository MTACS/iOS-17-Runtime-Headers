
@interface _BlastDoorLPiCloudSharingMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _application;
    NSString * _applicationBundleIdenfier;
    NSDictionary * _encodedTokens;
    _BlastDoorLPImage * _icon;
    NSString * _kind;
    _BlastDoorLPImage * _thumbnail;
    NSString * _title;
}

@property (nonatomic, copy) NSString *application;
@property (nonatomic, copy) NSString *applicationBundleIdenfier;
@property (nonatomic, retain) NSDictionary *encodedTokens;
@property (nonatomic, retain) _BlastDoorLPImage *icon;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, retain) _BlastDoorLPImage *thumbnail;
@property (nonatomic, copy) NSString *title;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)application;
- (id)applicationBundleIdenfier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedTokens;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (void)setApplication:(id)arg1;
- (void)setApplicationBundleIdenfier:(id)arg1;
- (void)setEncodedTokens:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTokenData:(id)arg1 handle:(id)arg2 url:(id)arg3;
- (id)shareURLForHandle:(id)arg1;
- (id)thumbnail;
- (id)title;
- (id)tokenDataForHandle:(id)arg1;

@end
