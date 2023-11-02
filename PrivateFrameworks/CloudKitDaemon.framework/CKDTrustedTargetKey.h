
@interface CKDTrustedTargetKey : NSObject {
    NSData * _key;
}

@property (nonatomic, readonly) NSData *key;

- (void).cxx_destruct;
- (id)decrypt:(id)arg1;
- (id)encrypt:(id)arg1;
- (id)init;
- (id)key;

@end
