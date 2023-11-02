
@interface HMBAction : HMFObject <NSCopying, NSMutableCopying> {
    bool  _shouldUpdateClients;
}

@property (nonatomic) bool shouldUpdateClients;

+ (id)shouldUpdateClientsAction;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setShouldUpdateClients:(bool)arg1;
- (bool)shouldUpdateClients;

@end
