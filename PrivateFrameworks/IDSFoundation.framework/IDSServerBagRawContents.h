
@interface IDSServerBagRawContents : NSObject <NSCopying> {
    NSDate * _expirationDate;
    NSDate * _loadDate;
    NSArray * _serverCerts;
    NSData * _serverSignature;
    NSData * _signedBag;
    double  _timeToLive;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSDate *loadDate;
@property (nonatomic, readonly) NSArray *serverCerts;
@property (nonatomic, readonly) NSData *serverSignature;
@property (nonatomic, readonly) NSData *signedBag;
@property (nonatomic, readonly) double timeToLive;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)expirationDate;
- (id)initWithLoadDate:(id)arg1 timeToLive:(double)arg2 serverSignature:(id)arg3 serverCerts:(id)arg4 signedBag:(id)arg5;
- (id)loadDate;
- (id)serverCerts;
- (id)serverSignature;
- (id)signedBag;
- (double)timeToLive;

@end
