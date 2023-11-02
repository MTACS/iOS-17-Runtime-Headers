
@interface SXComponentVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding> {
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)initWithViewport:(id)arg1;
- (id)viewport;
- (double)visiblePercentageOfObject:(id)arg1;

@end
