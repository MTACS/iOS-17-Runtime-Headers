
@interface PersonalIntelligenceCore.MetricMessage : NSObject <BMStoreData> {
    void $__lazy_storage_$_codableArray;
    void backend;
    void dataVersion;
    void messageContents;
    void messageIdentifier;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, readonly) NSString *description;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)init;
- (id)json;
- (id)serialize;

@end
