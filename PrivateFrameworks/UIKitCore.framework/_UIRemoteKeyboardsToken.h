
@interface _UIRemoteKeyboardsToken : NSObject {
    int  _identifier;
    NSString * sceneIdentityString;
}

@property (nonatomic, copy) NSString *sceneIdentityString;

+ (id)uniqueToken;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)sceneIdentityString;
- (void)setSceneIdentityString:(id)arg1;

@end
