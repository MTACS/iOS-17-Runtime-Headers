
@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate * _private;
}

- (void)dealloc;
- (id)host;
- (id)initWithPatternString:(id)arg1;
- (bool)isValid;
- (bool)matchesSubdomains;
- (bool)matchesURL:(id)arg1;
- (id)scheme;

@end
