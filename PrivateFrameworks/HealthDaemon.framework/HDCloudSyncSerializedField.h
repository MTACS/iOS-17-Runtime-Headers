
@interface HDCloudSyncSerializedField : NSObject {
    NSSet * _classes;
    bool  _encrypted;
    NSString * _key;
}

@property (nonatomic, readonly, copy) NSSet *classes;
@property (nonatomic, readonly) bool encrypted;
@property (nonatomic, readonly, copy) NSString *key;

+ (id)fieldForKey:(id)arg1 classes:(id)arg2 encrypted:(bool)arg3;

- (void).cxx_destruct;
- (id)classes;
- (bool)encrypted;
- (id)key;

@end
