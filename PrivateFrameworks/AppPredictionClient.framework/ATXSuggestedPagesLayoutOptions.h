
@interface ATXSuggestedPagesLayoutOptions : NSObject <NSSecureCoding> {
    NSSet * _candidateApps;
}

@property (nonatomic, copy) NSSet *candidateApps;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidateApps;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCandidateApps:(id)arg1;

@end
