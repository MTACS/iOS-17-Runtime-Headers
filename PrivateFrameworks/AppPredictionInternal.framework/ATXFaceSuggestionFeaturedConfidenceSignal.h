
@interface ATXFaceSuggestionFeaturedConfidenceSignal : NSObject <ATXFaceSuggestionSignal>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double weight;

- (double)valueForDescriptor:(id)arg1;
- (double)weight;

@end
