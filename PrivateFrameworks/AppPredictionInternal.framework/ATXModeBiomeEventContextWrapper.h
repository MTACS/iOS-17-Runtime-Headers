
@interface ATXModeBiomeEventContextWrapper : NSObject <ATXTimedEventProtocol, NSSecureCoding> {
    ATXUnifiedInferredActivityTransition * _mostRecentModeTransition;
    NSObject<ATXTimedEventProtocol> * _wrappedEvent;
}

@property (nonatomic, readonly) unsigned long long currentActivityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATXUnifiedInferredActivityTransition *mostRecentModeTransition;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<ATXTimedEventProtocol> *wrappedEvent;

+ (bool)supportsSecureCoding;
+ (id)wrapEventStream:(id)arg1 modeTransitionStream:(id)arg2 startingContext:(id)arg3;
+ (id)wrapEventStreams:(id)arg1 modeTransitionStream:(id)arg2 startingContext:(id)arg3;

- (void).cxx_destruct;
- (id)_dataFromPath:(id)arg1;
- (bool)_fileExistsAtPath:(id)arg1;
- (unsigned long long)currentActivityType;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTime;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPreviousContext:(id)arg1 nextEvent:(id)arg2;
- (id)initWithTransitionEvent:(id)arg1 eventToWrap:(id)arg2;
- (id)mostRecentModeTransition;
- (void)persistToPath:(id)arg1;
- (id)serialize:(id*)arg1;
- (void)setMostRecentModeTransition:(id)arg1;
- (void)setWrappedEvent:(id)arg1;
- (id)wrappedEvent;

@end
