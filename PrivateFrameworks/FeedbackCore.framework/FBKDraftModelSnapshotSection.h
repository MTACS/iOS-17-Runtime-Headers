
@interface FBKDraftModelSnapshotSection : NSObject {
    NSObject * _object;
    long long  _type;
}

@property (nonatomic, retain) NSObject *object;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1 object:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
