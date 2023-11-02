
@interface GEOMapSubscriptionFetchLastUpdatedDateReply : GEOXPCReply <GEOXPCReply> {
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
