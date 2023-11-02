
@interface SKUIUber : NSObject {
    <SKUIArtworkProviding> * _artworkProvider;
    SKUIColorScheme * _colorScheme;
    NSString * _text;
}

@property (nonatomic, readonly) <SKUIArtworkProviding> *artworkProvider;
@property (nonatomic, readonly) SKUIColorScheme *colorScheme;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)artworkProvider;
- (id)colorScheme;
- (id)initWithUberDictionary:(id)arg1;
- (id)text;

@end
