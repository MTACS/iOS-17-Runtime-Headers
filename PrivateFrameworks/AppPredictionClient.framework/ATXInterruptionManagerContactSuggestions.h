
@interface ATXInterruptionManagerContactSuggestions : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _candidateContacts;
    NSMutableArray * _recommendedContacts;
}

@property (nonatomic, readonly) NSArray *candidateContacts;
@property (nonatomic, readonly) NSArray *recommendedContacts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCandidateContact:(id)arg1;
- (void)addRecommendedContact:(id)arg1;
- (id)candidateContacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecommendedContacts:(id)arg1 candidateContacts:(id)arg2;
- (id)recommendedContacts;

@end
