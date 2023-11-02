
@interface LAAvailableMechanismsWrapper : NSObject {
    NSArray * _mechanismEvents;
}

@property (nonatomic, readonly) bool allowsBiometry;
@property (nonatomic, readonly) bool allowsPasscode;
@property (nonatomic, readonly) bool allowsWatch;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) bool isEmpty;

- (void).cxx_destruct;
- (bool)allowsBiometry;
- (bool)allowsPasscode;
- (bool)allowsWatch;
- (unsigned long long)count;
- (id)initWithMechanismEvents:(id)arg1;
- (bool)isEmpty;

@end
