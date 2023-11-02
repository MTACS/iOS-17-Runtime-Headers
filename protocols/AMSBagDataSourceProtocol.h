
@protocol AMSBagDataSourceProtocol <NSObject>

@required

- (NSString *)bagLoadingPartialIdentifier;
- (<NSObject> *)defaultValueForKey:(NSString *)arg1;
- (NSDate *)expirationDate;
- (bool)isLoaded;
- (void)loadWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSBagDataSourceLoadResult *, NSError *, void*
- (AMSProcessInfo *)processInfo;
- (NSString *)profile;
- (NSString *)profileVersion;
- (void)setDefaultValue:(id <NSObject>)arg1 forKey:(NSString *)arg2;
- (NSString *)valueForURLVariable:(NSString *)arg1 account:(ACAccount *)arg2;
- (void)valueForURLVariable:(void *)arg1 account:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@optional

- (id /* block */)dataSourceChangedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, AMSBagDataSourceChange *, void*, id, SEL
- (id /* block */)dataSourceDataInvalidatedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSString *, NSString *, void*, id, SEL
- (NSString *)descriptionExtended;
- (NSDictionary *)loadedValuesForKeys:(NSSet *)arg1;
- (void)setDataSourceChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSBagDataSourceChange *, void*
- (void)setDataSourceDataInvalidatedHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*
- (void)setDescriptionExtended:(NSString *)arg1;

@end
