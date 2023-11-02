
@interface BPSOrderedMergeUpstreamState : NSObject <BMBookmark> {
    id  _lastReturnedEvent;
    id  _nextEvent;
    <BPSPublisher> * _upstream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id lastReturnedEvent;
@property (nonatomic, retain) id nextEvent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)attachUpstream:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNextEvent:(id)arg1 lastReturnedEvent:(id)arg2;
- (id)lastReturnedEvent;
- (id)nextEvent;
- (void)setLastReturnedEvent:(id)arg1;
- (void)setNextEvent:(id)arg1;
- (id)upstream;

@end
