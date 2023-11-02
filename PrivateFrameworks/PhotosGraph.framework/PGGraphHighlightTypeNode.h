
@interface PGGraphHighlightTypeNode : PGGraphPropertylessNode <PGAssetCollectionFeature> {
    NSString * _label;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)aggregationTypeNodeFilter;
+ (id)concludedTripTypeNodeFilter;
+ (id)defaultTypeNodeFilter;
+ (id)filter;
+ (id)highlightGroupOfType;
+ (id)longTripTypeNodeFilter;
+ (id)onGoingTripTypeNodeFilter;
+ (id)shortTripTypeNodeFilter;
+ (id)tripTypeNodeFilter;
+ (id)typeNodeFilterForLabel:(id)arg1;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;

@end
