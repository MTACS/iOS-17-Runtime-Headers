
@protocol INPersonResolutionResultExport <NSObject, JSExport>

@required

+ (id)confirmationRequiredWithPersonToConfirm:(INPerson *)arg1;
+ (id)disambiguationWithPeopleToDisambiguate:(NSArray *)arg1;
+ (id)successWithResolvedPerson:(INPerson *)arg1;

- (id)init;

@end
