
@interface SUNavigationMenuItem : NSObject <NSCopying> {
    SUItemContentRating * _contentRating;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) SUItemContentRating *contentRating;
@property (nonatomic, readonly) NSString *title;

- (id)URL;
- (id)contentRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)title;

@end
