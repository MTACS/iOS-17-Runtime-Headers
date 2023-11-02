
@interface GDVUEntityClass : NSObject {
    void inner;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) unsigned char intValue;
@property (nonatomic, readonly) NSString *name;

+ (id)animal;
+ (id)entity;
+ (id)person;

- (void).cxx_destruct;
- (long long)hash;
- (id)id;
- (id)init;
- (unsigned char)intValue;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
