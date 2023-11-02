
@interface CLSNowPlayingStreamConverter : NSObject {
    unsigned long long  _options;
}

@property (nonatomic) unsigned long long options;

+ (unsigned long long)defaultOptions;
+ (id)recognizedMusicSources;

- (bool)_canUseEvent:(id)arg1;
- (id)eventFromDuetKnoweledgeEvent:(id)arg1;
- (id)eventsFromDuetKnowledgeEvents:(id)arg1;
- (id)init;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;

@end
