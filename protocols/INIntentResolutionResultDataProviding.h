
@protocol INIntentResolutionResultDataProviding <NSObject>

@required

- (NSDictionary *)_JSONDictionaryRepresentationForIntent:(INIntent *)arg1 parameterName:(NSString *)arg2;
- (NSData *)resolutionResultDataForIntent:(INIntent *)arg1 intentSlotDescription:(INIntentSlotDescription *)arg2 error:(id*)arg3;
- (void)transformResolutionResultForIntent:(void *)arg1 intentSlotDescription:(void *)arg2 withOptionsProvider:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: INIntent *, INIntentSlotDescription *, <INIntentParameterOptionsProviding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <INIntentResolutionResultDataProviding> *, void*

@end
