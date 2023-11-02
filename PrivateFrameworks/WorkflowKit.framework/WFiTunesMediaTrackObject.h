
@interface WFiTunesMediaTrackObject : WFiTunesStoreObject <MTLJSONSerializing> {
    WFTimeInterval * _duration;
    bool  _explicit;
    NSString * _genre;
    NSURL * _previewURL;
    bool  _streamable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) WFTimeInterval *duration;
@property (nonatomic, readonly) bool explicit;
@property (nonatomic, readonly) NSString *genre;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *previewURL;
@property (nonatomic, readonly) bool streamable;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)durationJSONTransformer;
+ (id)explicitJSONTransformer;
+ (id)priceJSONTransformer;

- (void).cxx_destruct;
- (id)duration;
- (bool)explicit;
- (id)genre;
- (id)previewURL;
- (bool)streamable;

@end
