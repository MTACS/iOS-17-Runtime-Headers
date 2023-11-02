
@interface _PIParallaxInfillResult : _NURenderResult <PIParallaxInfillResult> {
    <NUImageBuffer> * _infilledImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NUImageBuffer> *infilledImage;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)infilledImage;
- (void)setInfilledImage:(id)arg1;

@end
