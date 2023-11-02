
@interface CNContactRelationLocalizationProvider : NSObject <CNContactRelationLocalizationProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)preferredLanguages;
+ (id)supplementalLabelURLPairsForLanguages:(id)arg1;

@end
