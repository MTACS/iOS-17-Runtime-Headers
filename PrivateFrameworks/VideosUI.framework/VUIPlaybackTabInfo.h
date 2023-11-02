
@interface VUIPlaybackTabInfo : NSObject {
    NSString * _adamId;
    NSString * _canonicalId;
    bool  _isInfoTabAllowed;
    VUIPlaybackTabDetails * _multiviewTabInfo;
    NSArray * _tabDetails;
}

@property (nonatomic, retain) NSString *adamId;
@property (nonatomic, retain) NSString *canonicalId;
@property (nonatomic, readonly) bool isInfoTabAllowed;
@property (nonatomic, readonly) VUIPlaybackTabDetails *multiviewTabInfo;
@property (nonatomic, readonly) NSArray *tabDetails;

- (void).cxx_destruct;
- (id)adamId;
- (id)canonicalId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isInfoTabAllowed;
- (id)multiviewTabInfo;
- (void)setAdamId:(id)arg1;
- (void)setCanonicalId:(id)arg1;
- (id)tabDetails;

@end
