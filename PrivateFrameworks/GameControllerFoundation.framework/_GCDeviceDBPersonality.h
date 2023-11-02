
@interface _GCDeviceDBPersonality : NSObject <NSCopying> {
    GCVersion * _compatibilityVersion;
    NSPredicate * _ioMatchingPredicate;
    GCGenericDeviceModel * _model;
    NSURL * _url;
}

@property (readonly, copy) GCVersion *compatibilityVersion;
@property (readonly, copy) NSPredicate *ioMatchingPredicate;
@property (readonly, copy) GCGenericDeviceModel *model;

- (void).cxx_destruct;
- (id)compatibilityVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1 error:(out id*)arg2;
- (id)initWithURL:(id)arg1 error:(out id*)arg2;
- (id)ioMatchingPredicate;
- (id)model;

@end
