
@protocol WFRecordAudioActionUserInterface <WFActionRemoteUserInterface>

@required

- (void)showWithOutputFormat:(void *)arg1 startImmediately:(void *)arg2 recordingDuration:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: long long, bool, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFFileRepresentation *, NSError *, void*

@end
