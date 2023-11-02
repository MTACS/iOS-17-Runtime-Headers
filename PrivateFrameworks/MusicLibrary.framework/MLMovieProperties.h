
@interface MLMovieProperties : NSObject <NSCopying> {
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, copy) NSArray *castMembers;
@property (nonatomic, copy) NSString *copyrightWarning;
@property (nonatomic, copy) NSArray *directors;
@property (nonatomic, copy) NSArray *producers;
@property (nonatomic, copy) NSArray *screenwriters;
@property (nonatomic, copy) NSString *studioName;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)castMembers;
- (id)copyMoviePropertiesDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyrightWarning;
- (id)directors;
- (id)init;
- (id)initWithMoviePropertiesDictionary:(id)arg1;
- (id)producers;
- (id)screenwriters;
- (void)setCastMembers:(id)arg1;
- (void)setCopyrightWarning:(id)arg1;
- (void)setDirectors:(id)arg1;
- (void)setProducers:(id)arg1;
- (void)setScreenwriters:(id)arg1;
- (void)setStudioName:(id)arg1;
- (id)studioName;

@end
