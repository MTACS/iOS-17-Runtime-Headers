
@interface HMDSymptomContainer : NSObject {
    <HMDAccessorySymptomsDelegate> * _delegate;
    NSString * _idsIdentifier;
    NSSet * _symptoms;
}

@property (nonatomic) <HMDAccessorySymptomsDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *idsIdentifier;
@property (nonatomic, copy) NSSet *symptoms;

- (void).cxx_destruct;
- (id)delegate;
- (id)idsIdentifier;
- (id)initWithIDSIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSymptoms:(id)arg1;
- (id)symptoms;

@end
