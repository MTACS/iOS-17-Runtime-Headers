
@interface CKVDevice : NSObject {
    NSString * _identifier;
    bool  _isLocal;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isLocal;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 isLocal:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)isLocal;

@end
