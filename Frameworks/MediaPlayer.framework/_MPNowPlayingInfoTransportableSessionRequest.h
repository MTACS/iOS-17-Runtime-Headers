
@interface _MPNowPlayingInfoTransportableSessionRequest : NSObject <MPNowPlayingInfoTransportableSessionRequest> {
    NSString * _identifier;
    NSString * _preferredSessionType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *preferredSessionType;
@property (readonly) Class superclass;

+ (id)requestWithIdentifier:(id)arg1 preferredSessionType:(id)arg2;

- (void).cxx_destruct;
- (id)identifier;
- (id)preferredSessionType;

@end
