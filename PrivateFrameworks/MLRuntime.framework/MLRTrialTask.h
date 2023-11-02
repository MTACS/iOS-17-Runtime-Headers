
@interface MLRTrialTask : NSObject {
    TRIClient * _triClient;
}

@property (nonatomic, readonly) TRIClient *triClient;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTriClient:(id)arg1;
- (id)initWithTrialTask:(id)arg1;
- (id)triClient;

@end
