
@interface _NUVideoAttributesResult : _NURenderResult <NUVideoAttributesResult> {
    NUVideoAttributes * _videoAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;
@property (nonatomic, retain) NUVideoAttributes *videoAttributes;

- (void).cxx_destruct;
- (void)setVideoAttributes:(id)arg1;
- (id)videoAttributes;

@end
