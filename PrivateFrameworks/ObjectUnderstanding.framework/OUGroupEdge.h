
@interface OUGroupEdge : NSObject <NSCopying> {
    NSUUID * source_object_uuid;
    NSUUID * target_object_uuid;
}

@property (nonatomic, retain) NSUUID *source_object_uuid;
@property (nonatomic, retain) NSUUID *target_object_uuid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSource_object_uuid:(id)arg1;
- (void)setTarget_object_uuid:(id)arg1;
- (id)source_object_uuid;
- (id)target_object_uuid;

@end
