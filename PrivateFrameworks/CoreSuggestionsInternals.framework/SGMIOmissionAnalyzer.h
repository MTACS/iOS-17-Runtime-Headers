
@interface SGMIOmissionAnalyzer : NSObject

+ (id)_identifyComposeWarningsFromSubject:(id)arg1 content:(id)arg2 attributes:(id)arg3 toRecipients:(id)arg4 ccRecipients:(id)arg5 bccRecipients:(id)arg6 originalToRecipients:(id)arg7 originalCcRecipients:(id)arg8 attachments:(id)arg9 language:(id)arg10 store:(id)arg11 disableConservativeCheckRequirement:(bool)arg12;
+ (id)filterOutOrConvertMatches:(id)arg1 visibleFlatRecipientEmailsList:(id)arg2 visibleFlatRecipientList:(id)arg3 bccFlatRecipientList:(id)arg4 contactMatchRequired:(bool)arg5 textContent:(id)arg6 regexLanguage:(id)arg7 detectedLanguage:(id)arg8 store:(id)arg9;
+ (id)identifyComposeWarningsFromSubject:(id)arg1 content:(id)arg2 attributes:(id)arg3 toRecipients:(id)arg4 ccRecipients:(id)arg5 bccRecipients:(id)arg6 originalToRecipients:(id)arg7 originalCcRecipients:(id)arg8 attachments:(id)arg9;
+ (id)identifyComposeWarningsFromSubject:(id)arg1 content:(id)arg2 attributes:(id)arg3 toRecipients:(id)arg4 ccRecipients:(id)arg5 bccRecipients:(id)arg6 originalToRecipients:(id)arg7 originalCcRecipients:(id)arg8 attachments:(id)arg9 language:(id)arg10 store:(id)arg11 disableConservativeCheckRequirement:(bool)arg12;
+ (bool)matchRecentContact:(id)arg1 store:(id)arg2;
+ (id)reportUserEngagement:(bool)arg1 forWarning:(id)arg2;
+ (id)reportUserEngagement:(bool)arg1 forWarning:(id)arg2 store:(id)arg3;

@end
