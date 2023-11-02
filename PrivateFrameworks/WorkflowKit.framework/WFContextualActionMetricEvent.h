
@interface WFContextualActionMetricEvent : WFEvent {
    bool  _hasTrackpad;
    unsigned int  _itemCount;
    NSString * _key;
    NSString * _source;
}

@property (nonatomic) bool hasTrackpad;
@property (nonatomic) unsigned int itemCount;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *source;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;
- (bool)hasTrackpad;
- (unsigned int)itemCount;
- (id)key;
- (void)setHasTrackpad:(bool)arg1;
- (void)setItemCount:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
