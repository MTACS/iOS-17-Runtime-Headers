
@interface NTKComplicationSampleData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationID;
    NSString * _clientID;
    bool  _encodesTemplatesAsPaths;
    NSMutableDictionary * _familyToTemplate;
    NSMutableDictionary * _familyToTemplatePath;
    NSMutableSet * _supportedFamilies;
}

@property (nonatomic, copy) NSString *applicationID;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic) bool encodesTemplatesAsPaths;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_decodedTemplateFromPath:(id)arg1;
- (void)_inflateAllTemplates;
- (id)_uncachedTemplateForFamily:(long long)arg1;
- (bool)_validateTemplatesExist;
- (id)applicationID;
- (id)clientID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)encodesTemplatesAsPaths;
- (bool)hasTemplateForFamily:(long long)arg1;
- (id)inflatedCopy;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedFamilies:(id)arg1;
- (void)setApplicationID:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setEncodesTemplatesAsPaths:(bool)arg1;
- (void)setTemplate:(id)arg1 forFamily:(long long)arg2;
- (void)setTemplatePath:(id)arg1 forFamily:(long long)arg2;
- (id)supportedFamilies;
- (id)templateForFamily:(long long)arg1;
- (id)templatePathForFamily:(long long)arg1;
- (id)templateReferenceForFamily:(long long)arg1;

@end
