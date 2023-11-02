
@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
    long long  _terminalStatus;
}

- (bool)_isDefunct;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2;
- (long long)status;

@end
