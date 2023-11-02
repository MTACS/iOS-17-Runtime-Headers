
@interface BWIOSurfaceCompressionHistogramAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _bufferHeight;
    unsigned long long  _chromaCompressionHistogram;
    unsigned long long  _lumaCompressionHistogram;
    int  _nodeType;
    unsigned int  _numberOfSamples;
    bool  _pixelFormatIsTenBit;
    NSString * _portType;
}

@property (nonatomic) unsigned int bufferHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int nodeType;
@property (nonatomic) unsigned int numberOfSamples;
@property (nonatomic) bool pixelFormatIsTenBit;
@property (nonatomic, retain) NSString *portType;
@property (readonly) Class superclass;

- (unsigned int)bufferHeight;
- (void)dealloc;
- (id)eventDictionary;
- (id)eventName;
- (int)nodeType;
- (unsigned int)numberOfSamples;
- (bool)pixelFormatIsTenBit;
- (id)portType;
- (void)reset;
- (void)setBufferHeight:(unsigned int)arg1;
- (void)setChromaCompressionHistogram:(unsigned long long)arg1;
- (void)setLumaCompressionHistogram:(unsigned long long)arg1;
- (void)setNodeType:(int)arg1;
- (void)setNumberOfSamples:(unsigned int)arg1;
- (void)setPixelFormatIsTenBit:(bool)arg1;
- (void)setPortType:(id)arg1;

@end
