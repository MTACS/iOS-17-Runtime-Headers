
@interface UISceneOpenURLOptions : NSObject {
    <NSObject> * _annotation;
    long long  _contentOwner;
    UIEventAttribution * _eventAttribution;
    bool  _openAsDownload;
    bool  _openInPlace;
    NSString * _sourceApp;
    BSProcessHandle * _sourceProcessHandle;
}

@property (nonatomic, readonly) long long _contentOwner;
@property (nonatomic, readonly) bool _openAsDownload;
@property (nonatomic, readonly) BSProcessHandle *_sourceProcessHandle;
@property (nonatomic, readonly) id annotation;
@property (nonatomic, readonly) UIEventAttribution *eventAttribution;
@property (nonatomic, readonly) bool openInPlace;
@property (nonatomic, readonly) NSString *sourceApplication;

+ (id)_optionsFromDictionary:(id)arg1;
+ (id)_optionsFromPayload:(id)arg1 sourceProcessHandle:(id)arg2;

- (void).cxx_destruct;
- (long long)_contentOwner;
- (id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(bool)arg4;
- (id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(bool)arg4 eventAttribution:(id)arg5 openAsDownload:(bool)arg6 contentOwner:(long long)arg7;
- (bool)_openAsDownload;
- (id)_sourceProcessHandle;
- (id)annotation;
- (id)description;
- (id)eventAttribution;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)openInPlace;
- (id)sourceApplication;

@end
