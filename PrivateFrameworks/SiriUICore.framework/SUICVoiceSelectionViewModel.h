
@interface SUICVoiceSelectionViewModel : NSObject <NSCopying> {
    NSArray * _languages;
    NSArray * _voices;
}

@property (nonatomic, readonly, copy) NSArray *languages;
@property (nonatomic, readonly, copy) NSArray *voices;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLanguages:(id)arg1 voices:(id)arg2;
- (id)languages;
- (id)voices;

@end
