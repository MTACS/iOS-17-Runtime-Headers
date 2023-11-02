
@interface VUIBaseMediaItem : TVPBaseMediaItem {
    VUIMediaStartTimeCollection * _startTimeCollection;
}

@property (nonatomic, retain) VUIMediaStartTimeCollection *startTimeCollection;

+ (void)initialize;

- (void).cxx_destruct;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (void)setStartTimeCollection:(id)arg1;
- (id)startTimeCollection;

@end
