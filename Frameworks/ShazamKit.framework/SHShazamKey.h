
@interface SHShazamKey : NSObject <NSCopying> {
    NSString * _validatedKey;
}

@property (nonatomic, readonly, copy) NSString *validatedKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithKey:(id)arg1;
- (bool)isShazamKeyValid:(id)arg1;
- (id)validatedKey;

@end
