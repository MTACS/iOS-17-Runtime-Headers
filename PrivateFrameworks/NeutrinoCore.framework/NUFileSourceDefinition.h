
@interface NUFileSourceDefinition : NUSingleSourceDefinition {
    NSURL * _url;
    bool  _useEmbeddedPreview;
    NSString * _uti;
}

@property (readonly) NSURL *url;
@property (nonatomic) bool useEmbeddedPreview;
@property (readonly) NSString *uti;

- (void).cxx_destruct;
- (id)description;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;
- (long long)mediaType;
- (void)setUseEmbeddedPreview:(bool)arg1;
- (id)url;
- (bool)useEmbeddedPreview;
- (id)uti;

@end
