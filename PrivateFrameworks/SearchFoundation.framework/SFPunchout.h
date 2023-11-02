
@interface SFPunchout : NSObject <NSCopying, NSSecureCoding, SFPunchout> {
    NSString * _actionTarget;
    NSString * _bundleIdentifier;
    NSURL * _cachedOpenableURL;
    struct { 
        unsigned int isRunnableInBackground : 1; 
        unsigned int hasClip : 1; 
    }  _has;
    bool  _hasClip;
    bool  _isRunnableInBackground;
    NSString * _label;
    NSString * _name;
    NSArray * _urls;
    SFUserActivityData * _userActivityData;
}

@property (nonatomic, copy) NSString *actionTarget;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSURL *cachedOpenableURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasClip;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRunnableInBackground;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSURL *preferredOpenableURL;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, retain) SFUserActivityData *userActivityData;

+ (id)punchoutWithURL:(id)arg1;
+ (id)punchoutWithURLs:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionTarget;
- (id)bundleIdentifier;
- (id)cachedOpenableURL;
- (bool)canOpenURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasClip;
- (bool)hasHasClip;
- (bool)hasIsRunnableInBackground;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRunnableInBackground;
- (id)jsonData;
- (id)label;
- (id)name;
- (id)preferredOpenableURL;
- (void)setActionTarget:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCachedOpenableURL:(id)arg1;
- (void)setHasClip:(bool)arg1;
- (void)setIsRunnableInBackground:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrls:(id)arg1;
- (void)setUserActivityData:(id)arg1;
- (id)urls;
- (id)userActivityData;

@end
