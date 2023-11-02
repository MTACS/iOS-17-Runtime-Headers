
@interface SNOptional : NSObject {
    void object;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (long long)hash;
- (id)init;
- (id)initEmpty;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptional:(id)arg1;
- (id)object;

@end
