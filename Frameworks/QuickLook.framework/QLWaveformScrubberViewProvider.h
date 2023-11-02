
@interface QLWaveformScrubberViewProvider : NSObject <PHVideoScrubberFilmstripViewProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)generateWaveformForWidth:(double)arg1 asset:(id)arg2 updateHandler:(id /* block */)arg3;

- (id)createFilmstripViewForVideoScrubberView:(id)arg1;

@end
