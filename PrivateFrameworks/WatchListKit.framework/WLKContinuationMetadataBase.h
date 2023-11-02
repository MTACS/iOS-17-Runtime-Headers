
@interface WLKContinuationMetadataBase : NSObject {
    NSURL * _contentTVAppDeeplinkURL;
    NSString * _context;
    long long  _contextEnum;
    NSDictionary * _dictionary;
    bool  _isPurchase;
    bool  _isRental;
    NSString * _localizedContext;
    WLKBasicContentMetadata * _movieOrShowContent;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSURL *contentTVAppDeeplinkURL;
@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly) long long contextEnum;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly) bool isPurchase;
@property (nonatomic) bool isRental;
@property (nonatomic, readonly, copy) NSString *localizedContext;
@property (nonatomic, readonly) WLKBasicContentMetadata *movieOrShowContent;
@property (nonatomic, readonly) NSDate *timestamp;

+ (long long)_contextForString:(id)arg1;
+ (void)add:(id)arg1 toCollection:(id)arg2;
+ (void)remove:(id)arg1 fromCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_mergingIdentifier;
- (id)contentTVAppDeeplinkURL;
- (id)context;
- (long long)contextEnum;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (bool)isPurchase;
- (bool)isRental;
- (id)localizedContext;
- (id)movieOrShowContent;
- (void)setIsRental:(bool)arg1;
- (id)timestamp;

@end
