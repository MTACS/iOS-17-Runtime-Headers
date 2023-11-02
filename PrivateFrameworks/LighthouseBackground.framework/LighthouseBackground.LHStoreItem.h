
@interface LighthouseBackground.LHStoreItem : NSObject <BMStoreData> {
    void dataVersion;
    void messagePayload;
    void messageTimestamp;
    void messageType;
}

@property (nonatomic) unsigned int dataVersion;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)init;
- (id)serialize;
- (void)setDataVersion:(unsigned int)arg1;

@end
