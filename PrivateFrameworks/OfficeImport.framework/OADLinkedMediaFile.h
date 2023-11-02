
@interface OADLinkedMediaFile : OADMovie {
    bool  mIsExternal;
    NSURL * mUrl;
}

@property bool isExternal;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (bool)isExternal;
- (void)setIsExternal:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
