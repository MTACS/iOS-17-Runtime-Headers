
@interface ASFriendListDisplayContext : NSObject {
    long long  _displayFilter;
    long long  _displayMode;
}

@property (nonatomic) long long displayFilter;
@property (nonatomic) long long displayMode;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)displayFilter;
- (long long)displayMode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setDisplayFilter:(long long)arg1;
- (void)setDisplayMode:(long long)arg1;

@end
