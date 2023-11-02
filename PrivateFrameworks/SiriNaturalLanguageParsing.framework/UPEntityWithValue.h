
@interface UPEntityWithValue : NSObject {
    NSString * _entityName;
    NSString * _entityType;
    NSString * _entityValue;
}

@property (readonly, copy) NSString *entityName;
@property (readonly, copy) NSString *entityType;
@property (readonly, copy) NSString *entityValue;

- (void).cxx_destruct;
- (id)description;
- (id)entityName;
- (id)entityType;
- (id)entityValue;
- (id)initWithType:(id)arg1 entityName:(id)arg2 entityValue:(id)arg3;
- (bool)isEqualToEntityWithValue:(id)arg1;

@end
