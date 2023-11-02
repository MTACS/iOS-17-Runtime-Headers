
@interface IMChatScrutinyController : NSObject

+ (id)sharedController;

- (double)_maxDurationForScrutinyMode;
- (void)markMessageAsCorrupt:(id)arg1;
- (void)markMessageAsNotCorrupt:(id)arg1;
- (id)scrutinyInfo;
- (void)setTranscriptRenderingMetadata:(id)arg1 forChatIdentifier:(id)arg2;
- (id)transcriptRenderingMetadataForChatIdentifier:(id)arg1;

@end
