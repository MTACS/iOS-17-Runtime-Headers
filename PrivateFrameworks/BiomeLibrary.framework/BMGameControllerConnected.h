
@interface BMGameControllerConnected : BMEventBase <BMStoreData> {
    bool  _hasIsControllerConnected;
    bool  _hasNumberOfControllersConnected;
    bool  _isControllerConnected;
    int  _numberOfControllersConnected;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsControllerConnected;
@property (nonatomic) bool hasNumberOfControllersConnected;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isControllerConnected;
@property (nonatomic, readonly) int numberOfControllersConnected;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsControllerConnected;
- (bool)hasNumberOfControllersConnected;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIsControllerConnected:(id)arg1 numberOfControllersConnected:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isControllerConnected;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)numberOfControllersConnected;
- (id)serialize;
- (void)setHasIsControllerConnected:(bool)arg1;
- (void)setHasNumberOfControllersConnected:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
