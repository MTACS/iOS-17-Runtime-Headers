
@interface ATXLinkActionContainer : NSObject <ATXProtoBufWrapper, ATXSuggestionExecutableProtocol> {
    LNAction * _action;
    NSString * _bundleId;
    INAppIntent * _cachedAppIntent;
    LNImage * _image;
}

@property (nonatomic, readonly) LNAction *action;
@property (nonatomic, readonly) NSString *bundleId;
@property (retain) INAppIntent *cachedAppIntent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LNImage *image;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBundleId:(id)arg1 action:(id)arg2 image:(id)arg3;
- (id)action;
- (id)bundleId;
- (id)cachedAppIntent;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)init;
- (id)initWithBundleId:(id)arg1 action:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXLinkActionContainer:(id)arg1;
- (id)proto;
- (void)setCachedAppIntent:(id)arg1;
- (void)setImage:(id)arg1;

@end
