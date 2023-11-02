
@interface CKDAppContainerAccountMetadata : NSObject {
    CKContainerOptions * _containerOptions;
    long long  _tokenRegistered;
}

@property (nonatomic, retain) CKContainerOptions *containerOptions;
@property (nonatomic) long long tokenRegistered;

- (void).cxx_destruct;
- (id)containerOptions;
- (id)init;
- (id)initWithContainerOptions:(id)arg1 tokenRegistered:(long long)arg2;
- (void)setContainerOptions:(id)arg1;
- (void)setTokenRegistered:(long long)arg1;
- (long long)tokenRegistered;

@end
