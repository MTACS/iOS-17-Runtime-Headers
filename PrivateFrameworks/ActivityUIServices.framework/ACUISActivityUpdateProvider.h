
@interface ACUISActivityUpdateProvider : NSObject <ACUISActivityUpdateProviding> {
    NSString * _activityIdentifier;
    ACActivityDescriptor * _descriptor;
    long long  _state;
    <_TtP18ActivityUIServices23ActivityUpdateProviding_> * _updateProviding;
}

@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) ACActivityDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_activityState:(long long)arg1;
- (id)activityIdentifier;
- (id)descriptor;
- (id)initWithActivityUpdateProviding:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
