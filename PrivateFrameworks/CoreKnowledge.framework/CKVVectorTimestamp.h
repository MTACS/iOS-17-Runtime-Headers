
@interface CKVVectorTimestamp : NSObject <NSCopying> {
    NSNumber * _sequence;
    CKDistributedSiteIdentifier * _siteIdentfier;
    unsigned char  _state;
}

@property (nonatomic, retain) NSNumber *sequence;
@property (nonatomic, retain) CKDistributedSiteIdentifier *siteIdentfier;
@property (nonatomic) unsigned char state;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSiteIdentfier:(id)arg1 sequence:(id)arg2 state:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (id)sequence;
- (void)setSequence:(id)arg1;
- (void)setSiteIdentfier:(id)arg1;
- (void)setState:(unsigned char)arg1;
- (id)siteIdentfier;
- (unsigned char)state;

@end
