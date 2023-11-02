
@interface ATXUserNotificationAppDigest : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper> {
    NSArray * _appMarqueeGroups;
    NSString * _bundleId;
    NSArray * _groups;
    NSArray * _nonAppMarqueeGroups;
}

@property (nonatomic, readonly) NSArray *appMarqueeGroups;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) NSArray *nonAppMarqueeGroups;

- (void).cxx_destruct;
- (id)appMarqueeGroups;
- (id)bundleId;
- (id)encodeAsProto;
- (id)groups;
- (id)initFromJSON:(id)arg1;
- (id)initWithBundleId:(id)arg1 appMarqueeGroups:(id)arg2 nonAppMarqueeGroups:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)jsonRepresentation;
- (id)nonAppMarqueeGroups;
- (id)proto;

@end
