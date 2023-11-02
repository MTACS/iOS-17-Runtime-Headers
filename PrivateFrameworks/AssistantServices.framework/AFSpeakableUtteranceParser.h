
@interface AFSpeakableUtteranceParser : NSObject {
    id  _functionHandler;
    NSLocale * _locale;
    NSMutableDictionary * _providers;
}

@property (nonatomic) bool handleTTSCodes;
@property (nonatomic) bool handlesFunctions;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (bool)_shouldAutomaticallyProvideFunctions;
+ (id)parseUserGeneratedMessage:(id)arg1;

- (void).cxx_destruct;
- (id)_handleControlCodeAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; })arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int*)arg4 hadEmpties:(bool*)arg5 containsPrivacySensitiveContents:(bool*)arg6 externalProviders:(bool*)arg7;
- (id)_handleOptionalAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; })arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int*)arg4 containsPrivacySensitiveContents:(bool*)arg5 externalProviders:(bool*)arg6;
- (id)_handleProviderAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; })arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int*)arg4 containsPrivacySensitiveContents:(bool*)arg5 hadEmpties:(bool*)arg6 externalProviders:(bool*)arg7;
- (id)_parseStringWithFormat:(id)arg1 error:(id*)arg2 hadEmpties:(bool*)arg3 containsPrivacySensitiveContents:(bool*)arg4 externalProviders:(bool*)arg5;
- (bool)handleTTSCodes;
- (bool)handlesFunctions;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id*)arg2;
- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id*)arg2 containsPrivacySensitiveContents:(bool*)arg3;
- (id)parseStringWithFormat:(id)arg1 error:(id*)arg2;
- (id)parseStringWithFormat:(id)arg1 error:(id*)arg2 containsPrivacySensitiveContents:(bool*)arg3;
- (id)parseStringWithFormat:(id)arg1 error:(id*)arg2 containsPrivacySensitiveContents:(bool*)arg3 hasExternalDomains:(bool*)arg4;
- (id)parseStringWithFormat:(id)arg1 error:(id*)arg2 hasExternalDomains:(bool*)arg3;
- (id)parseStringWithFormat:(id)arg1 includeControlCharacters:(bool)arg2 error:(id*)arg3 hadEmpties:(bool*)arg4 containsPrivacySensitiveContents:(bool*)arg5 externalProviders:(bool*)arg6;
- (void)registerProvider:(id)arg1 forNamespace:(id)arg2;
- (void)setHandleTTSCodes:(bool)arg1;
- (void)setHandlesFunctions:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

+ (id)_domainsForStringWithFormat:(id)arg1;
+ (id)afui_speakableUtteranceParserForCurrentLanguage;

- (id)_builtInDomains;
- (bool)afui_hasExternalDomainsForStringWithFormat:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

+ (id)_domainsForStringWithFormat:(id)arg1;
+ (id)sruif_speakableUtteranceParserForCurrentLanguage;

- (id)_builtInDomains;
- (bool)sruif_hasExternalDomainsForStringWithFormat:(id)arg1 shouldRedactLog:(bool)arg2;

@end
