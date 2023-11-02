
@interface GEOMapSubscriptionContainmentReply : GEOXPCReply <GEOXPCReply> {
    bool  _sufficientlyContained;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool sufficientlyContained;
@property (readonly) Class superclass;

- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setSufficientlyContained:(bool)arg1;
- (bool)sufficientlyContained;

@end
