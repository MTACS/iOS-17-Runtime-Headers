
@interface VGFrameSelectionDumpOutput : NSObject <NSSecureCoding> {
    NSArray * _selectedPoses;
}

@property (nonatomic, retain) NSArray *selectedPoses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)selectedPoses;
- (void)setSelectedPoses:(id)arg1;

@end
