
@interface PFPosterDescriptor : NSObject <NSCopying, NSSecureCoding> {
    long long  _descriptorType;
    NSString * _displayNameLocalizationKey;
    NSString * _identifier;
    NSArray * _media;
    PFPosterShuffleConfiguration * _shuffleConfiguration;
    NSString * _styleCategory;
    unsigned long long  _version;
}

@property (nonatomic, readonly) long long descriptorType;
@property (nonatomic, retain) NSString *displayNameLocalizationKey;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isBlankTemplate;
@property (nonatomic, readonly) NSArray *media;
@property (nonatomic, readonly) long long posterType;
@property (nonatomic, retain) PFPosterShuffleConfiguration *shuffleConfiguration;
@property (nonatomic, retain) NSString *styleCategory;
@property (nonatomic) unsigned long long version;

+ (id)descriptorIdentifierForDescriptorType:(long long)arg1 uuids:(id)arg2;
+ (long long)descriptorTypeFromTypeString:(id)arg1;
+ (id)descriptorTypeStringWithType:(long long)arg1;
+ (id)loadFromURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)descriptorType;
- (id)displayNameLocalizationKey;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptorType:(long long)arg1 media:(id)arg2;
- (bool)isBlankTemplate;
- (bool)isEqual:(id)arg1;
- (id)media;
- (long long)posterType;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setShuffleConfiguration:(id)arg1;
- (void)setStyleCategory:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)shuffleConfiguration;
- (id)styleCategory;
- (unsigned long long)version;

@end
