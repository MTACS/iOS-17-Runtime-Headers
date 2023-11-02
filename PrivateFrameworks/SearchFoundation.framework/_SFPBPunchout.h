
@interface _SFPBPunchout : PBCodable <NSSecureCoding, _SFPBPunchout> {
    NSString * _actionTarget;
    NSString * _bundleIdentifier;
    bool  _hasClip;
    bool  _isRunnableInBackground;
    NSString * _label;
    NSString * _name;
    NSArray * _urls;
    _SFPBUserActivityData * _userActivityData;
}

@property (nonatomic, copy) NSString *actionTarget;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasClip;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRunnableInBackground;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, retain) _SFPBUserActivityData *userActivityData;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

- (void).cxx_destruct;
- (id)actionTarget;
- (void)addUrls:(id)arg1;
- (id)bundleIdentifier;
- (void)clearUrls;
- (id)dictionaryRepresentation;
- (bool)hasClip;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRunnableInBackground;
- (id)jsonData;
- (id)label;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setActionTarget:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setHasClip:(bool)arg1;
- (void)setIsRunnableInBackground:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrls:(id)arg1;
- (void)setUserActivityData:(id)arg1;
- (id)urls;
- (id)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (id)userActivityData;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

+ (id)punchoutWithURL:(id)arg1;

@end
