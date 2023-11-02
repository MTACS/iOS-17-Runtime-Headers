
@interface _CurareInternalBiomeFeature : NSObject <BMStoreData, FSFFeature> {
    NSMutableDictionary * _content;
    unsigned int  dataVersion;
}

@property (nonatomic, readonly) NSDictionary *content;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)content;
- (unsigned int)dataVersion;
- (id)initWithCurareInteraction:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)interactionId;
- (id)json;
- (id)serialize;

@end
