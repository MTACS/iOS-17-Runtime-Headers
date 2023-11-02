
@interface MSDLocalization : NSObject {
    NSDictionary * _localizationTable;
}

@property (nonatomic, retain) NSDictionary *localizationTable;

+ (void)fillInMissingLocales:(id)arg1 withOwnershipWarningMsg:(id)arg2;
+ (bool)getChannelWarningKeys:(id*)arg1 andPlaceHolderWarnings:(id*)arg2 forDeviceClass:(id)arg3;
+ (id)getLocalizedOwnershipWarnings:(id)arg1;
+ (bool)getRetailWarningKeys:(id*)arg1 andPlaceHolderWarnings:(id*)arg2 forDeviceClass:(id)arg3;
+ (bool)getWarningKeys:(id*)arg1 andPlaceHolderWarnings:(id*)arg2 forOwnershipWarningFlag:(id)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)localizationTable;
- (id)localizedStringWithKey:(id)arg1 defaultString:(id)arg2;
- (void)setLocalizationTable:(id)arg1;

@end
