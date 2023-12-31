
@interface CMDictArchiveManager : CMStylingArchiveManager {
    bool  mIsFrameset;
    NSMutableString * mMainHtml;
    NSString * mName;
    NSString * mPrefix;
    NSString * mResourceUrlProtocol;
    NSMutableDictionary * mResources;
}

- (void).cxx_destruct;
- (id)copyDictionaryWithSizeInfos:(bool)arg1;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;
- (id)name;
- (void)pushCssToPath:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (unsigned long long)resourceCount;
- (id)resourceUrlProtocol;
- (void)setIsFrameset;

@end
