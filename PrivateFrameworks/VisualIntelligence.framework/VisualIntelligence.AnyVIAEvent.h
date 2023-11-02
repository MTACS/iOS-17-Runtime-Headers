
@interface VisualIntelligence.AnyVIAEvent : NSObject <VIAEvent> {
    void event;
}

@property (nonatomic, readonly) NSString *originatingApplication;
@property (nonatomic, readonly) unsigned long long queryID;

- (void).cxx_destruct;
- (id)feedback;
- (id)init;
- (id)originatingApplication;
- (unsigned long long)queryID;

@end
