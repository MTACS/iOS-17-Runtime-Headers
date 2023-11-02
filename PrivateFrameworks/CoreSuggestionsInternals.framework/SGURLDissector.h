
@interface SGURLDissector : SGPipelineDissector <SGMailMessageProcessing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned char)_flagsForBundleIdentifier:(id)arg1 documentDate:(id)arg2 documentTimeInterval:(double)arg3 isOutgoingDocument:(bool)arg4;
- (id)_titleFromMessagesSynthesizedTextContent:(id)arg1;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)supportedBundleIdentifiers;
- (id)urlsFromAttributes:(id)arg1 handle:(id)arg2 bundleIdentifier:(id)arg3 domainIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(double)arg8 receivedAt:(id)arg9 isOutgoingDocument:(bool)arg10;
- (id)urlsFromText:(id)arg1 handle:(id)arg2 dataDetectorMatches:(id)arg3 bundleIdentifier:(id)arg4 domainIdentifier:(id)arg5 uniqueIdentifier:(id)arg6 documentTitle:(id)arg7 documentDate:(id)arg8 documentTimeInterval:(double)arg9 receivedAt:(id)arg10 isOutgoingDocument:(bool)arg11;
- (id)urlsFromURLs:(id)arg1 handle:(id)arg2 bundleIdentifier:(id)arg3 domainIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(double)arg8 receivedAt:(id)arg9 isOutgoingDocument:(bool)arg10;

@end
