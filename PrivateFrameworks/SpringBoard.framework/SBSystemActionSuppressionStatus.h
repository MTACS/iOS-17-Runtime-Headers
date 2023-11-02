
@interface SBSystemActionSuppressionStatus : NSObject <BSDescriptionStreamable> {
    NSDictionary * _metrics;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;

@end
