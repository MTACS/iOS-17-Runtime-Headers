
@interface FCMagazineGenre : NSObject <NSCopying> {
    NSString * _genre;
    NSString * _localizedDescription;
}

@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSString *localizedDescription;

+ (id)magazineGenreWithGenre:(id)arg1 localizedDescription:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)genre;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithGenre:(id)arg1 localizedDescription:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (void)setGenre:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;

@end
