
@interface FCManagedResourceConfiguration : NSObject <NSCopying> {
    long long  _refreshRate;
    NSString * _resourceID;
}

@property (nonatomic, readonly) long long refreshRate;
@property (nonatomic, readonly, copy) NSString *resourceID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithResourceID:(id)arg1 refreshRate:(long long)arg2;
- (long long)refreshRate;
- (id)resourceID;

@end
