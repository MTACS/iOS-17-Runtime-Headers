
@interface SUUIUber : NSObject {
    <SUUIArtworkProviding> * _artworkProvider;
    SUUIColorScheme * _colorScheme;
    NSString * _text;
}

@property (nonatomic, readonly) <SUUIArtworkProviding> *artworkProvider;
@property (nonatomic, readonly) SUUIColorScheme *colorScheme;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)artworkProvider;
- (id)colorScheme;
- (id)initWithUberDictionary:(id)arg1;
- (id)text;

@end
