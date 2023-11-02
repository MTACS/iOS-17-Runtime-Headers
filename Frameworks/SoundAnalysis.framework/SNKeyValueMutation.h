
@interface SNKeyValueMutation : NSObject <NSCopying> {
    void keyPath;
    void type;
    void value;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (long long)hash;
- (id)init;
- (id)initAdditionOfKeyPath:(id)arg1 value:(id)arg2;
- (id)initAssignmentOfKeyPath:(id)arg1 value:(id)arg2;
- (id)initRemovalOfKeyPath:(id)arg1;
- (id)initUpdateOfKeyPath:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToKeyValueMutation:(id)arg1;
- (id)keyPath;
- (long long)type;
- (id)value;

@end
