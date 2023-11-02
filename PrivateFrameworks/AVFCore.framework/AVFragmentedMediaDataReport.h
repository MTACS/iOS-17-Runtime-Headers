
@interface AVFragmentedMediaDataReport : NSObject {
    AVFragmentedMediaDataReportInternal * _internal;
}

@property (nonatomic, readonly) long long numberOfBytesToEndOfFirstVideoFrame;

- (void)dealloc;
- (id)init;
- (id)initWithFigFragmentedMediaDataReportDictionary:(id)arg1;
- (long long)numberOfBytesToEndOfFirstVideoFrame;

@end
