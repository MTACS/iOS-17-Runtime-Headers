
@interface NTKFaceCollectionUpdate : NSObject {
    id /* block */  _block;
    long long  _type;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)updateWithType:(long long)arg1 uuid:(id)arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)block;
- (long long)type;
- (id)uuid;

@end
