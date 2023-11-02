
@interface HDReferenceExtractionProcessingContext : NSObject {
    NSMutableSet * _containedResourceIdentifiers;
    NSArray * _privateCompleteResources;
    NSArray * _privateIncompleteResources;
    NSArray * _privateUnresolvableReferences;
    NSMutableSet * _processedResources;
    NSMapTable * _resourcesWithUnresolvableReferences;
    NSMapTable * _unresolvedReferences;
}

@property (nonatomic, readonly) NSArray *completeResources;
@property (nonatomic, retain) NSMutableSet *containedResourceIdentifiers;
@property (nonatomic, readonly) NSArray *incompleteResources;
@property (nonatomic, retain) NSArray *privateCompleteResources;
@property (nonatomic, retain) NSArray *privateIncompleteResources;
@property (nonatomic, retain) NSArray *privateUnresolvableReferences;
@property (nonatomic, retain) NSMutableSet *processedResources;
@property (nonatomic, retain) NSMapTable *resourcesWithUnresolvableReferences;
@property (nonatomic, readonly) NSArray *unresolvableReferences;
@property (nonatomic, retain) NSMapTable *unresolvedReferences;

- (void).cxx_destruct;
- (void)_processResources;
- (void)_reset;
- (id)completeResources;
- (id)containedResourceIdentifiers;
- (id)incompleteResources;
- (id)init;
- (id)privateCompleteResources;
- (id)privateIncompleteResources;
- (id)privateUnresolvableReferences;
- (id)processedResources;
- (void)recordContainedResource:(id)arg1;
- (void)recordProcessedResource:(id)arg1;
- (void)recordUnresolvableReference:(id)arg1 forResource:(id)arg2 hint:(unsigned long long)arg3;
- (void)recordUnresolvedReference:(id)arg1 forResource:(id)arg2;
- (id)resourcesWithUnresolvableReferences;
- (void)setContainedResourceIdentifiers:(id)arg1;
- (void)setPrivateCompleteResources:(id)arg1;
- (void)setPrivateIncompleteResources:(id)arg1;
- (void)setPrivateUnresolvableReferences:(id)arg1;
- (void)setProcessedResources:(id)arg1;
- (void)setResourcesWithUnresolvableReferences:(id)arg1;
- (void)setUnresolvedReferences:(id)arg1;
- (id)unresolvableReferences;
- (id)unresolvedReferences;

@end
