
@interface VMUScanOverlay : NSObject {
    NSMutableArray * _rules;
}

@property (nonatomic, readonly) NSArray *refinementRules;

+ (id)defaultOverlay;
+ (id)defaultOverlayWithScanner:(id)arg1;
+ (bool)foundationHasNSSliceMemoryOptimization;

- (void).cxx_destruct;
- (void)addMetadataRefinementRule:(id /* block */)arg1;
- (id)initWithScanner:(id)arg1;
- (id)refinementRules;

@end
