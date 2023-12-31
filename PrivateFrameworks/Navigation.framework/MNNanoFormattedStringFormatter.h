
@interface MNNanoFormattedStringFormatter : NSObject <GEOServerFormattedStepStringFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedFormatter;

- (id)listInstructionForStep:(id)arg1;
- (id)signInstructionsForStep:(id)arg1;

@end
