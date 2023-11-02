
@interface PPSRecipeEngine : NSObject {
    NSMutableDictionary * _registeredHandlers;
}

@property (retain) NSMutableDictionary *registeredHandlers;

+ (id)createRecipeID:(id)arg1;
+ (id)recipeHandlers;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)executeRecipe:(id)arg1 withValue:(id)arg2 withMetricDefinition:(id)arg3 error:(id*)arg4;
- (id)initRecipeEngine;
- (void)registerHandlersForClass:(Class)arg1;
- (id)registeredHandlers;
- (void)setRegisteredHandlers:(id)arg1;
- (void)setupHandlers;

@end
