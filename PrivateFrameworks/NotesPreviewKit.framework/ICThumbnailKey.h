
@interface ICThumbnailKey : NSObject <NSCopying> {
    void accountId;
    void objectId;
    void thumbnailId;
}

@property (nonatomic, readonly) NSString *accountId;
@property (nonatomic, readonly) NSURL *containerUrl;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSURL *descriptionUrl;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSURL *imageUrl;
@property (nonatomic, readonly) NSString *objectId;
@property (nonatomic, readonly) NSString *thumbnailId;

+ (id)recentObjectId;

- (void).cxx_destruct;
- (id)accountId;
- (id)containerUrl;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)descriptionUrl;
- (long long)hash;
- (id)imageUrl;
- (id)init;
- (id)initWithAccountId:(id)arg1 objectId:(id)arg2;
- (id)initWithAccountId:(id)arg1 objectId:(id)arg2 thumbnailId:(id)arg3;
- (id)initWithType:(long long)arg1 accountId:(id)arg2 objectId:(id)arg3 preferredSize:(struct CGSize { double x1; double x2; })arg4 scale:(double)arg5 appearance:(unsigned long long)arg6;
- (id)initWithType:(long long)arg1 accountId:(id)arg2 objectId:(id)arg3 preferredSize:(struct CGSize { double x1; double x2; })arg4 scale:(double)arg5 appearance:(unsigned long long)arg6 isRTL:(bool)arg7 contentSizeCategory:(id)arg8 hasBoldText:(bool)arg9 hasButtonShapes:(bool)arg10 hasDarkerSystemColors:(bool)arg11 hasBorder:(bool)arg12;
- (id)initWithType:(long long)arg1 accountId:(id)arg2 objectId:(id)arg3 preferredSize:(struct CGSize { double x1; double x2; })arg4 traitCollection:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)objectId;
- (id)thumbnailId;

@end
