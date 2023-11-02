
@interface CMIOExtensionStreamProperties : NSObject {
    CMIOExtensionClient * _client;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _propertiesDictionary;
}

@property (retain) NSNumber *activeFormatIndex;
@property (retain) NSDictionary *frameDuration;
@property (retain) NSDictionary *maxFrameDuration;
@property (copy) NSDictionary *propertiesDictionary;
@property (retain) NSNumber *sinkBufferQueueSize;
@property (retain) NSNumber *sinkBufferUnderrunCount;
@property (retain) NSNumber *sinkBuffersRequiredForStartup;
@property (retain) NSNumber *sinkEndOfData;

+ (id)streamPropertiesWithDictionary:(id)arg1;

- (id)activeFormatIndex;
- (id)client;
- (void)dealloc;
- (id)frameDuration;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPropertyValues:(id)arg1 client:(id)arg2;
- (id)maxFrameDuration;
- (id)propertiesDictionary;
- (void)setActiveFormatIndex:(id)arg1;
- (void)setFrameDuration:(id)arg1;
- (void)setMaxFrameDuration:(id)arg1;
- (void)setPropertiesDictionary:(id)arg1;
- (void)setPropertyState:(id)arg1 forProperty:(id)arg2;
- (void)setSinkBufferQueueSize:(id)arg1;
- (void)setSinkBufferUnderrunCount:(id)arg1;
- (void)setSinkBuffersRequiredForStartup:(id)arg1;
- (void)setSinkEndOfData:(id)arg1;
- (id)sinkBufferQueueSize;
- (id)sinkBufferUnderrunCount;
- (id)sinkBuffersRequiredForStartup;
- (id)sinkEndOfData;

@end
