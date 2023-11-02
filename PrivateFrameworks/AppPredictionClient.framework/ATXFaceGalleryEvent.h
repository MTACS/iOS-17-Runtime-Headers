
@interface ATXFaceGalleryEvent : NSObject <ATXProtoBufWrapper, BMStoreData> {
    ATXFaceGalleryConfiguration * _configuration;
    long long  _eventType;
    NSArray * _items;
}

@property (nonatomic, readonly) ATXFaceGalleryConfiguration *configuration;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSDictionary *jsonDictionary;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)galleryDidAppearEventWithConfiguration:(id)arg1;
+ (id)galleryDidDisappearEvent;
+ (id)itemsDidAppearEventWithItems:(id)arg1;

- (void).cxx_destruct;
- (id)configuration;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (long long)eventType;
- (id)initWithEventType:(long long)arg1 configuration:(id)arg2 items:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)items;
- (id)json;
- (id)jsonDictionary;
- (id)proto;
- (id)serialize;
- (void)setEventType:(long long)arg1;

@end
