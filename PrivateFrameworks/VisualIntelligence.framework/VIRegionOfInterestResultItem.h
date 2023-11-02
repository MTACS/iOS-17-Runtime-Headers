
@interface VIRegionOfInterestResultItem : NSObject <NSCopying> {
    NSString * _domain;
    VIObjectKnowledge * _objectKnowledge;
    VIOntologyNode * _ontologyNode;
    VIThirdPartyObject * _thirdPartyObject;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) VIObjectCategory *objectCategory;
@property (nonatomic, readonly) VIObjectKnowledge *objectKnowledge;
@property (nonatomic, readonly) VIOntologyNode *ontologyNode;
@property (nonatomic, readonly) VIThirdPartyObject *thirdPartyObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domain;
- (id)initWithDomain:(id)arg1 thirdPartyObject:(id)arg2 ontologyNode:(id)arg3 objectKnowledge:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)objectCategory;
- (id)objectKnowledge;
- (id)ontologyNode;
- (id)thirdPartyObject;

@end
