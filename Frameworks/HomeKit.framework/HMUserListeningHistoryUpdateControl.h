
@interface HMUserListeningHistoryUpdateControl : NSObject <NSCopying, NSMutableCopying> {
    NSMutableSet * _internalAccessories;
}

@property (readonly, copy) NSArray *accessories;

- (void).cxx_destruct;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAccessories:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
