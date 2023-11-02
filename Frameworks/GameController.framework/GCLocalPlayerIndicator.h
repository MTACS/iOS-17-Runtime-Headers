
@interface GCLocalPlayerIndicator : NSObject <GCControllerPlayerIndicator> {
    long long  _playerIndex;
    <GCControllerPlayerIndicator> * _systemPlayerIndicatorProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property long long playerIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GCControllerPlayerIndicator> *systemPlayerIndicatorProxy;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithInitialValue:(long long)arg1 systemPlayerIndicatorProxy:(id)arg2;
- (long long)playerIndex;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (id)systemPlayerIndicatorProxy;

@end
