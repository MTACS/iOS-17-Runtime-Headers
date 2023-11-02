
@interface CMState : NSObject {
    OCDDocument * _document;
    long long  _textLevel;
    NSMutableDictionary * components;
    NSMutableDictionary * htmlResource;
    OADColorMap * mColorMap;
    OADColorScheme * mColorScheme;
    bool  mIsOnPhone;
    bool  mIsThumbnail;
    NSString * mResourceUrlPrefix;
    id  mResources;
    unsigned long long  mSourceFormat;
}

@property (retain) OADColorMap *colorMap;
@property (retain) OADColorScheme *colorScheme;
@property (retain) OCDDocument *document;
@property bool isOnPhone;
@property bool isThumbnail;
@property (retain) id resources;
@property unsigned long long sourceFormat;

- (void).cxx_destruct;
- (id)colorMap;
- (id)colorScheme;
- (id)componentByName:(id)arg1;
- (void)copyFromCMStateWithoutComponents:(id)arg1;
- (id)document;
- (id)getHtmlResource;
- (id)init;
- (bool)isOffice12;
- (bool)isOnPhone;
- (bool)isThumbnail;
- (void)popTextLevel;
- (void)pushTextLevel;
- (id)resourceUrlPrefix;
- (id)resources;
- (void)setColorMap:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setComponentWithName:(id)arg1 value:(id)arg2;
- (void)setDocument:(id)arg1;
- (void)setHtmlResource:(id)arg1;
- (void)setIsOnPhone:(bool)arg1;
- (void)setIsThumbnail:(bool)arg1;
- (void)setResourceUrlPrefix:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setSourceFormat:(unsigned long long)arg1;
- (unsigned long long)sourceFormat;
- (long long)textLevel;

@end
