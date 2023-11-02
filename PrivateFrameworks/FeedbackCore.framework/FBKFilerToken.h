
@interface FBKFilerToken : NSObject {
    NSNumber * _dsid;
    NSNumber * _entityID;
    unsigned long long  _entityType;
    NSString * _token;
}

@property (nonatomic, readonly) NSNumber *dsid;
@property (nonatomic, readonly) NSNumber *entityID;
@property (nonatomic, readonly) unsigned long long entityType;
@property (nonatomic, readonly) NSString *token;

- (void).cxx_destruct;
- (id)dsid;
- (id)entityID;
- (unsigned long long)entityType;
- (id)initWithEntityID:(id)arg1 type:(unsigned long long)arg2 token:(id)arg3 dsid:(id)arg4;
- (id)token;

@end
