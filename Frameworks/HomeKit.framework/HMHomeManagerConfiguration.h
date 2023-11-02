
@interface HMHomeManagerConfiguration : NSObject <HMFObject, NSCopying, NSMutableCopying> {
    bool  _adaptive;
    unsigned long long  _cachePolicy;
    NSURL * _cacheURL;
    NSOperationQueue * _delegateQueue;
    bool  _discretionary;
    HMFLocationAuthorization * _locationAuthorization;
    unsigned long long  _options;
    bool  _shouldConnect;
}

@property (getter=isAdaptive, readonly) bool adaptive;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic) unsigned long long cachePolicy;
@property (readonly) NSURL *cacheURL;
@property (readonly) bool canUseCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (getter=isDiscretionary, readonly) bool discretionary;
@property (readonly) unsigned long long hash;
@property (readonly) HMFLocationAuthorization *locationAuthorization;
@property (readonly) unsigned long long options;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic) bool shouldConnect;
@property (readonly) Class superclass;

+ (id)defaultConfiguration;
+ (id)defaultPrivateConfiguration;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)cachePolicy;
- (id)cacheURL;
- (bool)canUseCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegateQueue;
- (id)description;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;
- (bool)isAdaptive;
- (bool)isDiscretionary;
- (id)locationAuthorization;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)options;
- (id)privateDescription;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setShouldConnect:(bool)arg1;
- (id)shortDescription;
- (bool)shouldConnect;

@end
