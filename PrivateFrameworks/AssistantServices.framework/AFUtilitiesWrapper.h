
@interface AFUtilitiesWrapper : NSObject

+ (bool)deviceSupportsSiriUOD;
+ (bool)isDictationLanguageInstalledForOnDeviceDictation:(id)arg1 offlineDictationStatus:(id)arg2;
+ (bool)offlineDictationCapable;
+ (bool)shouldRunAsrOnServerForUOD;

@end
