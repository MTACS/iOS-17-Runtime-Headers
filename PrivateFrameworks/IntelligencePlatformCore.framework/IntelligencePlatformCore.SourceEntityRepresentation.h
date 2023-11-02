
@interface IntelligencePlatformCore.SourceEntityRepresentation : NSObject <BMStoreData> {
    void identifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  source;
    void sourceEntities;
    void timestamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)init;
- (id)serialize;

@end
