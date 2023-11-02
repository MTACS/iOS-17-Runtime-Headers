
@interface PXSettingsIndex : NSObject {
    NSArray * _entries;
}

@property (nonatomic, readonly) NSArray *entries;

+ (id)_entriesForSettingsController:(id)arg1 usingProgress:(id)arg2;
+ (id)createIndexForSettings:(id)arg1 resultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_initWithEntries:(id)arg1;
- (id)entries;
- (id)init;
- (id)searchForText:(id)arg1 resultHandler:(id /* block */)arg2;

@end
