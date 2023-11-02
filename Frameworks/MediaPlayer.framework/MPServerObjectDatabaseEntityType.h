
@interface MPServerObjectDatabaseEntityType : NSObject {
    NSString * _genericObjectRelationshipKey;
    NSString * _serverEntityType;
}

@property (nonatomic, readonly, copy) NSString *genericObjectRelationshipKey;
@property (nonatomic, readonly, copy) NSString *serverEntityType;

+ (id)entityTypeWithServerEntityType:(id)arg1 genericObjectRelationshipKey:(id)arg2;

- (void).cxx_destruct;
- (id)genericObjectRelationshipKey;
- (id)serverEntityType;

@end
