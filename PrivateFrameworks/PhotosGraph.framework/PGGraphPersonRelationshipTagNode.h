
@interface PGGraphPersonRelationshipTagNode : PGGraphPropertylessNode <MAUniquelyIdentifiableNode, PGGraphLocalizable, PGGraphSynonymSupport> {
    NSString * _label;
}

@property (nonatomic, readonly) PGGraphPersonRelationshipTagNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (id)filterWithTag:(unsigned long long)arg1;
+ (id)labelForRelationshipTag:(unsigned long long)arg1;
+ (id)personWithTag;
+ (id)personWithTagWithConfidence:(double)arg1;
+ (unsigned long long)relationshipTagFromString:(id)arg1;
+ (id)supportedTagsAsStrings;

- (void).cxx_destruct;
- (id)_localizationKeyForRelationshipTagLabel:(id)arg1;
- (id)collection;
- (unsigned short)domain;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithPersonRelationshipTag:(unsigned long long)arg1;
- (id)label;
- (id)localizedName;
- (id)localizedSynonyms;
- (id)uniquelyIdentifyingFilter;

@end
