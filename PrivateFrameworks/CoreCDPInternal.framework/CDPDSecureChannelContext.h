
@interface CDPDSecureChannelContext : NSObject {
    <CDPDCircleProxy> * _circleProxy;
    CDPContext * _context;
    <CDPKeychainCircleProxy> * _keychainCircleProxy;
    <CDPSecureChannelProxy> * _secureChannelProxy;
    unsigned long long  _secureChannelType;
}

@property (nonatomic, retain) <CDPDCircleProxy> *circleProxy;
@property (nonatomic, readonly) CDPContext *context;
@property (nonatomic, retain) <CDPKeychainCircleProxy> *keychainCircleProxy;
@property (nonatomic, retain) <CDPSecureChannelProxy> *secureChannelProxy;
@property (nonatomic) unsigned long long secureChannelType;

- (void).cxx_destruct;
- (id)circleProxy;
- (id)context;
- (void)dealloc;
- (id)initWithContext:(id)arg1 channel:(id)arg2 dataProvider:(id)arg3 circleProxy:(id)arg4;
- (id)initWithContext:(id)arg1 circleProxy:(id)arg2;
- (bool)initialize:(id*)arg1;
- (bool)initializePiggybackingChannel:(id*)arg1;
- (void)initializeTTSUChannel;
- (id)keychainCircleProxy;
- (id)secureChannelProxy;
- (unsigned long long)secureChannelType;
- (void)setCircleProxy:(id)arg1;
- (void)setKeychainCircleProxy:(id)arg1;
- (void)setSecureChannelProxy:(id)arg1;
- (void)setSecureChannelType:(unsigned long long)arg1;

@end
