
@interface CRKClassSession : CRKSession <CATRemoteConnectionDelegate> {
    unsigned short  _flags;
    DMFControlSessionIdentifier * _identifier;
    NSDate * _lastBeaconFoundDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DMFControlSessionIdentifier *identifier;
@property (nonatomic, retain) NSDate *lastBeaconFoundDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned short)flags;
- (void)foundBeaconWithFlags:(unsigned short)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)lastBeaconFoundDate;
- (id)lastMatchMessageForCurrentDate:(id)arg1;
- (void)logBeaconFound;
- (void)lostBeacon;
- (void)setFlags:(unsigned short)arg1;
- (void)setLastBeaconFoundDate:(id)arg1;
- (id)stateDictionary;

@end
