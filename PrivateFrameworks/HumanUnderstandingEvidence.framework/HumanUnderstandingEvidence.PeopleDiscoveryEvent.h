
@interface HumanUnderstandingEvidence.PeopleDiscoveryEvent : NSObject <BMStoreData> {
    void peopleDiscovered;
}

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)init;
- (id)json;
- (id)serialize;

@end
