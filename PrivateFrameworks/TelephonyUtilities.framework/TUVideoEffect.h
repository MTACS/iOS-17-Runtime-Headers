
@interface TUVideoEffect : NSObject {
    NSString * _name;
    UIImage * _thumbnailImage;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) UIImage *thumbnailImage;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 thumbnailImage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEffect:(id)arg1;
- (id)name;
- (id)thumbnailImage;

@end
