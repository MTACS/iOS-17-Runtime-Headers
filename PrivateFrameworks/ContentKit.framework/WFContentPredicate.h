
@interface WFContentPredicate : NSObject <WFContentPropertyContainer> {
    id /* block */  _block;
}

@property (nonatomic, readonly) NSSet *containedProperties;

+ (id)falsePredicate;
+ (id)predicateWithBlock:(id /* block */)arg1;
+ (id)truePredicate;

- (void).cxx_destruct;
- (id)containedProperties;
- (void)evaluateWithObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithBlock:(id /* block */)arg1;

@end
