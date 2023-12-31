
@interface PXMemoriesInlineProblemReporter : NSObject {
    NSArray * _features;
    PHMemory * _memory;
}

@property (nonatomic, retain) NSArray *features;
@property (nonatomic, retain) PHMemory *memory;

- (void).cxx_destruct;
- (id)_disclaimerText;
- (id)_headerText;
- (id)_infoText;
- (id)_reportStringForFeatures;
- (id)features;
- (id)feedbackMailViewController;
- (id)initWithMemory:(id)arg1 features:(id)arg2;
- (id)memory;
- (void)setFeatures:(id)arg1;
- (void)setMemory:(id)arg1;

@end
