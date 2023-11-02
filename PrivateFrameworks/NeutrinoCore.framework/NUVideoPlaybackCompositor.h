
@interface NUVideoPlaybackCompositor : NUVideoCompositor {
    NSString * _label;
}

@property (nonatomic, copy) NSString *label;

- (void).cxx_destruct;
- (void)fulfillVideoCompositionRequest:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;

@end
