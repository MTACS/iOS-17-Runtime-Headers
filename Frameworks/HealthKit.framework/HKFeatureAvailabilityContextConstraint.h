
@interface HKFeatureAvailabilityContextConstraint : NSObject {
    id /* block */  _acceptsContext;
}

@property (nonatomic, readonly) id /* block */ acceptsContext;

+ (id)allContexts;
+ (id)onlySomeContexts:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)acceptsContext;
- (bool)acceptsContext:(id)arg1;
- (id)initWithAcceptsContext:(id /* block */)arg1;

@end
