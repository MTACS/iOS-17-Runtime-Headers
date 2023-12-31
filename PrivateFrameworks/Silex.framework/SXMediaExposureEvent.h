
@interface SXMediaExposureEvent : SXMediaEvent {
    unsigned long long  _numberOfImages;
    unsigned long long  _numberOfImagesExposed;
}

@property (nonatomic) unsigned long long numberOfImages;
@property (nonatomic) unsigned long long numberOfImagesExposed;

- (unsigned long long)numberOfImages;
- (unsigned long long)numberOfImagesExposed;
- (void)setNumberOfImages:(unsigned long long)arg1;
- (void)setNumberOfImagesExposed:(unsigned long long)arg1;

@end
