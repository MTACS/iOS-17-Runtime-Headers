
@interface BMSpringBoardDominoWidgetTap : BMEventBase <BMStoreData> {
    NSString * _stackId;
    BMSpringBoardDominoWidget * _widget;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *stackId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMSpringBoardDominoWidget *widget;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithWidget:(id)arg1 stackId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)stackId;
- (id)widget;
- (void)writeTo:(id)arg1;

@end
