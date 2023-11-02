
@interface MPSkipIntervalCommand : MPRemoteCommand {
    NSArray * _preferredIntervals;
}

@property (nonatomic, copy) NSArray *preferredIntervals;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (id)newCommandEventWithInterval:(double)arg1;
- (id)preferredIntervals;
- (void)setPreferredIntervals:(id)arg1;

@end
