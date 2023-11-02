
@protocol HFIncludedContextProtocol <NSObject>

@required

- (bool)hf_hasSetForContextType:(unsigned long long)arg1;
- (bool)hf_isOnForContextType:(unsigned long long)arg1;
- (bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;
- (bool)hf_shouldHideForContextType:(unsigned long long)arg1;
- (NAFuture *)hf_updateValue:(bool)arg1 forContextType:(unsigned long long)arg2;

@optional

- (NAFuture *)hf_updateValueForCurrentObjectOnly:(bool)arg1 forContextType:(unsigned long long)arg2;

@end
