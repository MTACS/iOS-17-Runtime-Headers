
@interface SRUIFUtilities : NSObject

+ (id)_normalizeTextString:(id)arg1;
+ (id)descriptionForAceView:(id)arg1;
+ (id)descriptionForAddDialogs:(id)arg1;
+ (id)descriptionForAddViews:(id)arg1;
+ (id)descriptionForDialog:(id)arg1;
+ (id)descriptionForSayIt:(id)arg1;
+ (id)parsedUtteranceFromText:(id)arg1 context:(id)arg2 spekableObjectProviding:(id)arg3;
+ (bool)shouldRedactSpeakableTextForAceObject:(id)arg1;
+ (bool)string:(id)arg1 equalToString:(id)arg2;
+ (bool)string:(id)arg1 isSameAsUserUtterance:(id)arg2;

@end
