
@interface SRDefaults : NSObject {
    NSString * _className;
    unsigned long long  _datastoreVersion;
    NSString * _exportingClassName;
    unsigned long long  _maxAllowedMappedPages;
    unsigned long long  _metadataSize;
    float  _segmentPaddingFactor;
    float  _segmentResizeFactor;
    unsigned long long  _segmentSize;
}

- (void)dealloc;

@end
