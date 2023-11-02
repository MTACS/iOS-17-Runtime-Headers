
@interface BCMResource : NSObject <BFMResource> {
    void $__lazy_storage_$_relationships;
    void $__lazy_storage_$_views;
    void config;
    void data;
    void href;
    void id;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *href;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSDictionary *meta;
@property (nonatomic, copy) NSDictionary *relationships;
@property (nonatomic, readonly) NSString *socialHighlightID;
@property (nonatomic, copy) NSDictionary *views;

+ (long long)type;

- (void).cxx_destruct;
- (id)attributes;
- (id)href;
- (id)id;
- (id)init;
- (id)meta;
- (id)relationships;
- (void)setRelationships:(id)arg1;
- (void)setViews:(id)arg1;
- (id)socialHighlightID;
- (id)views;

@end
