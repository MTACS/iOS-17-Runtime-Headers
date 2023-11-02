
@interface VUIMediaItemCredits : NSObject <NSCopying> {
    NSOrderedSet * _cast;
    NSOrderedSet * _directors;
    NSOrderedSet * _producers;
    NSOrderedSet * _screenwriters;
}

@property (nonatomic, copy) NSOrderedSet *cast;
@property (nonatomic, copy) NSOrderedSet *directors;
@property (nonatomic, readonly) bool hasCredits;
@property (nonatomic, copy) NSOrderedSet *producers;
@property (nonatomic, copy) NSOrderedSet *screenwriters;

+ (id)_arrayFromStringRepresentation:(id)arg1;
+ (id)_stringRepresentationFromArray:(id)arg1;

- (void).cxx_destruct;
- (id)cast;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)directors;
- (bool)hasCredits;
- (unsigned long long)hash;
- (id)initWithStringRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)producers;
- (id)screenwriters;
- (void)setCast:(id)arg1;
- (void)setDirectors:(id)arg1;
- (void)setProducers:(id)arg1;
- (void)setScreenwriters:(id)arg1;
- (id)stringRepresentation;

@end
