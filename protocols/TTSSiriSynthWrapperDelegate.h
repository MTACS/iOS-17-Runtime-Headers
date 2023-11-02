
@protocol TTSSiriSynthWrapperDelegate

@required

- (void)siri:(TTSSiriSynthWrapper *)arg1 didGenerateBuffer:(AVAudioPCMBuffer *)arg2;
- (void)siri:(TTSSiriSynthWrapper *)arg1 didGenerateMarkers:(const struct SiriTTSMarker { bool x1; bool x2; unsigned short x3; unsigned int x4; unsigned long long x5; }*)arg2 count:(unsigned long long)arg3;
- (void)siriDidEndSynthesis:(TTSSiriSynthWrapper *)arg1 successfully:(bool)arg2;
- (void)siriDidStartSynthesis:(TTSSiriSynthWrapper *)arg1;

@end
