
@interface TRIContentTrackingId : NSObject <NSCopying> {
    NSString * _str;
}

@property (nonatomic, readonly) NSString *str;

+ (id)contentIdWithStr:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithReplacementStr:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStr:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContentId:(id)arg1;
- (id)str;

@end
