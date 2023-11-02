
@interface XBCacheDeleteRequestHandler : NSObject {
    <XBApplicationProviding> * _applicationProvider;
}

@property (nonatomic, retain) <XBApplicationProviding> *applicationProvider;

- (void).cxx_destruct;
- (id)amountPurgeable:(id)arg1 urgency:(int)arg2;
- (id)applicationProvider;
- (id)initWithApplicationProvider:(id)arg1;
- (id)performPeriodic:(id)arg1 urgency:(int)arg2;
- (id)performPurge:(id)arg1 urgency:(int)arg2;
- (void)setApplicationProvider:(id)arg1;

@end
