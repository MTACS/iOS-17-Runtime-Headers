
@interface IEPatternizer : NSObject

- (bool)generateCATs:(id)arg1 noOverwrite:(bool)arg2 deleteText:(bool)arg3 userParamTypes:(id)arg4;
- (bool)generatePatterns:(id)arg1 noOverwrite:(bool)arg2 deleteText:(bool)arg3 userParamTypes:(id)arg4;
- (bool)updateCATMetadata:(id)arg1 withMeta:(id)arg2;

@end
