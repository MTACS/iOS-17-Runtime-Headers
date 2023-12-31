
@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject {
    NSDate * _expirationDate;
    UIImage * _picture;
    NSString * _serverCacheTag;
    bool  _updating;
}

@property (nonatomic, readonly) bool expired;
@property (nonatomic, retain) UIImage *picture;
@property (nonatomic, copy) NSString *serverCacheTag;
@property (nonatomic) bool updating;

- (void).cxx_destruct;
- (id)description;
- (void)expire;
- (bool)expired;
- (void)extendExpirationDate;
- (id)picture;
- (id)serverCacheTag;
- (void)setPicture:(id)arg1;
- (void)setServerCacheTag:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (bool)updating;

@end
