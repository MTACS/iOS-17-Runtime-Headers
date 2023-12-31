
@interface _NUVideoPlaybackFrameRequestResponse : _NURenderResult <NUVideoPlaybackFrameResult> {
    struct __CVBuffer { } * _frame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) struct __CVBuffer { }*frame;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void)dealloc;
- (struct __CVBuffer { }*)frame;
- (void)setFrame:(struct __CVBuffer { }*)arg1;

@end
