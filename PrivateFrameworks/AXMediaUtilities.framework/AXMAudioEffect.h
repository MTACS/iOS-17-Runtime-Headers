
@interface AXMAudioEffect : NSObject {
    AXMAudioDataSource * _inputSource;
}

@property (nonatomic) AXMAudioDataSource *inputSource;

- (void).cxx_destruct;
- (id)inputSource;
- (void)processSamples:(unsigned long long)arg1;
- (void)setInputSource:(id)arg1;

@end
