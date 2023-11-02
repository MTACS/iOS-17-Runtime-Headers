
@interface CalConferenceURLDetector : NSObject

+ (id)_URLDataDetector;
+ (id)_URLsInSource:(id)arg1;
+ (id)_dataDetector;
+ (id)_firstPhoneNumberInSource:(id)arg1;
+ (id)_googleMeetSuffix;
+ (bool)_hasDisallowedPathExtension:(id)arg1;
+ (bool)_hasValidPath:(id)arg1;
+ (bool)_isGoogleMeetURL:(id)arg1;
+ (bool)_isValidTelURL:(id)arg1;
+ (id)_linksInSource:(id)arg1;
+ (id)_phoneNumberDataDetector;
+ (id)_preferredHostSuffixes;
+ (id)conferenceURLFromSources:(id)arg1;
+ (id)googleMeetURLsAndPhoneNumbersFromSource:(id)arg1;
+ (bool)isPreferredURL:(id)arg1;
+ (bool)isTUConversationLink:(id)arg1;
+ (id)logHandle;

@end
