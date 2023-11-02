
@interface MediaPlaybackCore.PlayerSourcedUserAction : _TtCs12_SwiftObject <MFUserAction> {
    void identifier;
    void options;
    void source;
    void sourceID;
    void timeStamp;
    void type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) long long source;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic, retain) <MFTimeStamp> *timeStamp;
@property (nonatomic) long long type;

- (id)identifier;
- (id)options;
- (void)setIdentifier:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSourceID:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)source;
- (id)sourceID;
- (id)timeStamp;
- (long long)type;

@end
