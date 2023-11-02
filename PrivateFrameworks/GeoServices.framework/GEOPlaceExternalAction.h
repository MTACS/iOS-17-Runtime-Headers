
@interface GEOPlaceExternalAction : NSObject {
    GEOPDActionData * _actionData;
    NSArray * _actionProviders;
    NSOrderedSet * _appAdamIds;
}

@property (nonatomic, readonly) NSString *actionName;
@property (nonatomic, readonly) NSArray *actionProviders;
@property (nonatomic, readonly) NSOrderedSet *appAdamIds;
@property (nonatomic, readonly) NSString *categoryId;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *winningAdamId;

- (void).cxx_destruct;
- (void)_setupActionProvidersWithAttributionMap:(id)arg1;
- (id)actionName;
- (id)actionProviders;
- (id)appAdamIds;
- (id)categoryId;
- (id)description;
- (id)initWithActionData:(id)arg1 attributionMap:(id)arg2;
- (id)partnerActionForAdamId:(id)arg1;
- (id)symbolName;
- (id)winningAdamId;

@end
