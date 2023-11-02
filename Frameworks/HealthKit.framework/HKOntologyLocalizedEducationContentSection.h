
@interface HKOntologyLocalizedEducationContentSection : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _sectionDataTypeMapping;
    long long  _sectionType;
}

@property (nonatomic, readonly, copy) NSArray *attributions;
@property (nonatomic, readonly, copy) NSArray *citations;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localeIdentifier;
@property (nonatomic, readonly, copy) NSString *localizedText;
@property (nonatomic, readonly, copy) NSArray *sectionData;
@property (nonatomic, readonly, copy) NSDictionary *sectionDataTypeMapping;
@property (nonatomic, readonly) long long sectionType;
@property (nonatomic, readonly, copy) NSArray *validRegionCodes;

+ (id)sectionByMerging:(id)arg1 sectionToMergeFrom:(id)arg2 options:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_arrayOfStringOfTypeOrNil:(long long)arg1;
- (id)attributions;
- (id)citations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionDataTypeMapping:(id)arg1 sectionType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)localeIdentifier;
- (id)localizedText;
- (id)sectionData;
- (id)sectionDataTypeMapping;
- (long long)sectionType;
- (id)validRegionCodes;

@end
