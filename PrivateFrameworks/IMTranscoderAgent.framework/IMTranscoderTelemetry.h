
@interface IMTranscoderTelemetry : NSObject {
    unsigned char  _signpostId;
}

- (void)_emitSignpostPreviewGenerationRange:(long long)arg1 begin:(bool)arg2;
- (void)_emitSignpostTranscodeRange:(long long)arg1 begin:(bool)arg2;
- (long long)_telemetryImageTypeForUTI:(id)arg1;
- (void)emitPreviewGenerationBeginFromUTI:(id)arg1;
- (void)emitPreviewGenerationEndFromUTI:(id)arg1;
- (void)emitSignpostNoTranscodeFromUTI:(id)arg1;
- (void)emitSignpostTranscodeFinalForDestinationUTI:(id)arg1;
- (void)emitSignpostTranscodeSkipSourceUTI:(id)arg1;
- (void)emitSignpostTranscodeStepForDestinationUTI:(id)arg1;
- (void)emitTranscodeBeginFromUTI:(id)arg1;
- (void)emitTranscodeEndFromUTI:(id)arg1;
- (id)init;

@end
