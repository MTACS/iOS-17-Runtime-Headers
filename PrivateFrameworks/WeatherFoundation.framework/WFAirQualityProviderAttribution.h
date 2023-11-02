
@interface WFAirQualityProviderAttribution : NSObject <NSCopying, NSSecureCoding> {
    UIImage * _cachedLogoImage;
    long long  _dataOrigination;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataSynchronizationLock;
    NSObject<OS_dispatch_queue> * _logoImageLoadingQueue;
    bool  _logoRequestInFlight;
    NSURL * _logoURL;
    NSString * _name;
    NSMutableArray * _outstandingRequestsCompletionBlocks;
    WFAirQualityProviderStation * _station;
}

@property (nonatomic, copy) UIImage *cachedLogoImage;
@property (nonatomic) long long dataOrigination;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } dataSynchronizationLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *logoImageLoadingQueue;
@property (nonatomic) bool logoRequestInFlight;
@property (nonatomic, copy) NSURL *logoURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableArray *outstandingRequestsCompletionBlocks;
@property (nonatomic, retain) WFAirQualityProviderStation *station;

+ (id)defaultProviderAttribution;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initInternal;
- (id)cachedLogoImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataOrigination;
- (struct os_unfair_lock_s { unsigned int x1; })dataSynchronizationLock;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 logoImage:(id)arg2 dataOrigination:(long long)arg3 station:(id)arg4;
- (id)initWithName:(id)arg1 logoURL:(id)arg2 dataOrigination:(long long)arg3;
- (id)initWithName:(id)arg1 logoURL:(id)arg2 dataOrigination:(long long)arg3 station:(id)arg4;
- (void)loadLogoImageWithCompletion:(id /* block */)arg1;
- (id)logoImageLoadingQueue;
- (bool)logoRequestInFlight;
- (id)logoURL;
- (id)name;
- (id)outstandingRequestsCompletionBlocks;
- (bool)p_checkRequestInFlight;
- (void)p_clearRequestInFlight;
- (id)p_imageWithData:(id)arg1;
- (void)p_invokeAndClearCompletionBlocksWithImage:(id)arg1 error:(id)arg2;
- (void)p_loadRemoteLogoImageForProvider:(id)arg1 completion:(id /* block */)arg2;
- (void)p_queueCompletionBlock:(id /* block */)arg1;
- (void)p_setRequestInFlight;
- (void)setCachedLogoImage:(id)arg1;
- (void)setDataOrigination:(long long)arg1;
- (void)setDataSynchronizationLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLogoImageLoadingQueue:(id)arg1;
- (void)setLogoRequestInFlight:(bool)arg1;
- (void)setLogoURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOutstandingRequestsCompletionBlocks:(id)arg1;
- (void)setStation:(id)arg1;
- (id)station;

@end
