
@interface SNAudioProcessorCache : NSObject {
    NSMapTable * _activeProcessorsCache;
}

- (void).cxx_destruct;
- (id)init;

@end
