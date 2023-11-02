
@interface FSFNluRequestFeature : NSObject <BMStoreData, FSFFeature> {
    SIRINLUEXTERNALCDMNluRequest * _content;
    unsigned int  _dataVersion;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)content;
- (unsigned int)dataVersion;
- (id)getSerializedData;
- (id)initWithContent:(id)arg1 dataVersion:(unsigned int)arg2;
- (id)initWithContentJson:(id)arg1 dataVersion:(unsigned int)arg2;
- (id)initWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (id)interactionId;
- (id)json;
- (id)serialize;

@end
