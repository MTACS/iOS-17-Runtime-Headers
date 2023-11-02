
@interface PLCrowdSourcedThemesAssetEvent : NSObject <BMStoreData> {
    NSString * _uuid;
    unsigned int  dataVersion;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uuid;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)initWithUUID:(id)arg1;
- (id)serialize;
- (id)uuid;

@end
