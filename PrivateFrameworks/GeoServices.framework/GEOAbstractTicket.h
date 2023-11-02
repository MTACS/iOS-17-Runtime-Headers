
@interface GEOAbstractTicket : NSObject {
    unsigned long long  _cachePolicy;
    bool  _cancelled;
    GEODataRequestThrottlerToken * _throttlerToken;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (getter=isCancelled, readonly) bool cancelled;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (unsigned long long)cachePolicy;
- (void)cancel;
- (id)description;
- (id)init;
- (id)initWithTraits:(id)arg1;
- (bool)isCancelled;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setThrottlerToken:(id)arg1;
- (id)traits;

@end
