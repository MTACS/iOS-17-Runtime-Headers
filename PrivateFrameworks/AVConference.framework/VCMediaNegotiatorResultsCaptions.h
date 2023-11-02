
@interface VCMediaNegotiatorResultsCaptions : NSObject {
    NSSet * _localLanguages;
    bool  _remoteCanDisplayCaptions;
    NSSet * _remoteLanguages;
}

@property (nonatomic, retain) NSSet *localLanguages;
@property (nonatomic) bool remoteCanDisplayCaptions;
@property (nonatomic, retain) NSSet *remoteLanguages;

- (void)dealloc;
- (id)localLanguages;
- (bool)remoteCanDisplayCaptions;
- (id)remoteLanguages;
- (void)setLocalLanguages:(id)arg1;
- (void)setRemoteCanDisplayCaptions:(bool)arg1;
- (void)setRemoteLanguages:(id)arg1;

@end
