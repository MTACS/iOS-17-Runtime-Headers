
@interface HMDBackingStoreUpdateObjectReference : NSOperation {
    id  _object;
    NSUUID * _uuid;
}

@property (nonatomic) id object;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 uuid:(id)arg2;
- (void)main;
- (id)object;
- (void)setObject:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
