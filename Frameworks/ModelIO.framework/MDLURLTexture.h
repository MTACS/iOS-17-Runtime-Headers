
@interface MDLURLTexture : MDLTexture {
    NSURL * _url;
}

@property (nonatomic, copy) NSURL *URL;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithURL:(id)arg1 name:(id)arg2;
- (void)setURL:(id)arg1;

@end
