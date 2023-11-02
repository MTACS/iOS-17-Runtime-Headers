
@interface SRDatastore : NSObject {
    SRFrameStore * _configuration;
    SRDefaults * _defaults;
    SRFrameStore * _framesStore;
    unsigned long long  _maxAllowedPages;
    SRFrameStore * _metadata;
    unsigned long long  _permission;
    float  _segmentResizeFactor;
}

+ (void)initialize;

- (void)dealloc;

@end
