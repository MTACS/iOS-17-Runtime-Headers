
@interface TKSmartCardToken : TKToken {
    NSData * _AID;
    id  _keepAlive;
    TKSmartCard * _smartCard;
}

@property (readonly) NSData *AID;
@property (nonatomic, retain) id keepAlive;
@property (nonatomic, readonly) TKSmartCard *smartCard;

- (void).cxx_destruct;
- (id)AID;
- (id)initWithSmartCard:(id)arg1 AID:(id)arg2 instanceID:(id)arg3 tokenDriver:(id)arg4;
- (id)keepAlive;
- (void)setKeepAlive:(id)arg1;
- (id)smartCard;

@end
