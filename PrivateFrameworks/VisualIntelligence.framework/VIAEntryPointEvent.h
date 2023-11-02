
@interface VIAEntryPointEvent : NSObject <VIAEvent> {
    NSString * _originatingApplication;
    unsigned long long  _queryID;
    long long  _type;
    unsigned long long  _viewAppearEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *originatingApplication;
@property (nonatomic, readonly) unsigned long long queryID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned long long viewAppearEvent;

+ (id)endEventWithOriginatingApplication:(id)arg1;
+ (id)startEventWithQueryID:(unsigned long long)arg1 viewAppearEvent:(unsigned long long)arg2 originatingApplication:(id)arg3;

- (void).cxx_destruct;
- (id)feedback;
- (id)initWithQueryID:(unsigned long long)arg1 type:(long long)arg2 viewAppearEvent:(unsigned long long)arg3 originatingApplication:(id)arg4;
- (id)originatingApplication;
- (unsigned long long)queryID;
- (long long)type;
- (unsigned long long)viewAppearEvent;

@end
