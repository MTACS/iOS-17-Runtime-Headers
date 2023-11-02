
@interface MSSiriIntelligenceSettings : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_initializeSettings;
+ (bool)canShowSiriSuggestions;
+ (id)log;
+ (void)setCanShowSiriSuggestions:(bool)arg1;

@end
