
@interface RadioRecentStationsGroup : NSObject <NSCopying, NSMutableCopying> {
    bool  _active;
    NSString * _localizedTitle;
    NSArray * _stations;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSArray *stations;

- (void).cxx_destruct;
- (id)_copyWithRecentStationsGroupClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)stations;

@end