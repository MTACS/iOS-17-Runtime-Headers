
@protocol TPNumberPadButtonProtocol <NSObject>

@required

- (long long)character;
- (id)initForCharacter:(long long)arg1;
- (id)initForCharacter:(long long)arg1 style:(long long)arg2;
- (void)setCharacter:(long long)arg1;

@optional

- (void)loadImagesForCurrentCharacter;

@end
