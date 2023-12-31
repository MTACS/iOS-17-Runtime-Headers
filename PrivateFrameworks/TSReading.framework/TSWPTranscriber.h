
@interface TSWPTranscriber : NSObject {
    NSString * _displayName;
    NSString * _identifier;
    NSLocale * _romanizationLocale;
    NSString * _transformIdentifier;
}

@property (readonly) NSLocale *romanizationLocale;

+ (id)transcriberWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4;
- (id)romanizationLocale;
- (id)transcribeText:(id)arg1;
- (id)transcribeText:(id)arg1 withLocale:(id)arg2;

@end
