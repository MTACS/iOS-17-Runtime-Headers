
@interface ATXUserAppPreferenceDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (bool)appSupportsParameterCombination:(id)arg1 forIntent:(id)arg2 forBundleId:(id)arg3;
- (id)initWithDevice:(id)arg1;
- (bool)parametersExistInValidCombinationsForParameters:(id)arg1 andValidCombinations:(id)arg2;
- (void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(id /* block */)arg3;
- (void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 skipAppSchemaCheck:(bool)arg3 callback:(id /* block */)arg4;

@end
