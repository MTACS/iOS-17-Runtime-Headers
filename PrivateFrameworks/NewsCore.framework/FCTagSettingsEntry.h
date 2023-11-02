
@interface FCTagSettingsEntry : NSObject {
    NSString * _accessToken;
    NSNumber * _contentScale;
    NSNumber * _contentScaleMacOS;
    NSNumber * _fontMultiplier;
    NSNumber * _fontMultiplierMacOS;
    NSString * _identifier;
    NSString * _tagID;
    bool  _webAccessOptIn;
}

@property (nonatomic, readonly, copy) NSString *accessToken;
@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (nonatomic, readonly, copy) NSNumber *contentScale;
@property (nonatomic, readonly, copy) NSNumber *contentScaleMacOS;
@property (nonatomic, readonly, copy) NSNumber *fontMultiplier;
@property (nonatomic, readonly, copy) NSNumber *fontMultiplierMacOS;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *tagID;
@property (nonatomic, readonly) bool webAccessOptIn;

- (void).cxx_destruct;
- (id)accessToken;
- (id)asCKRecord;
- (id)contentScale;
- (id)contentScaleMacOS;
- (id)fontMultiplier;
- (id)fontMultiplierMacOS;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 fontMultiplier:(id)arg3 fontMultiplierMacOS:(id)arg4 contentScale:(id)arg5 contentScaleMacOS:(id)arg6 accessToken:(id)arg7 webAccessOptIn:(bool)arg8;
- (id)tagID;
- (bool)webAccessOptIn;

@end
