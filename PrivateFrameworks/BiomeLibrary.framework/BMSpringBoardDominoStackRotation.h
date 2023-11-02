
@interface BMSpringBoardDominoStackRotation : BMEventBase <BMStoreData> {
    bool  _hasNewWidgetSuggestion;
    bool  _newWidgetSuggestion;
    int  _reason;
    NSString * _source;
    NSString * _stackId;
    BMSpringBoardDominoWidget * _widget;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasNewWidgetSuggestion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool newWidgetSuggestion;
@property (nonatomic, readonly) int reason;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSString *stackId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMSpringBoardDominoWidget *widget;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasNewWidgetSuggestion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithWidget:(id)arg1 stackId:(id)arg2 reason:(int)arg3 newWidgetSuggestion:(id)arg4;
- (id)initWithWidget:(id)arg1 stackId:(id)arg2 reason:(int)arg3 newWidgetSuggestion:(id)arg4 source:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (bool)newWidgetSuggestion;
- (int)reason;
- (id)serialize;
- (void)setHasNewWidgetSuggestion:(bool)arg1;
- (id)source;
- (id)stackId;
- (id)widget;
- (void)writeTo:(id)arg1;

@end
