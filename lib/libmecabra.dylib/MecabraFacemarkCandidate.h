
@interface MecabraFacemarkCandidate : NSObject {
    NSString * _category;
    NSString * _string;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *string;

+ (id)candidateWithString:(id)arg1 category:(id)arg2;
+ (id)copyFacemarkCandidatesForLanguage:(int)arg1;
+ (id)copyFacemarkCandidatesForLocale:(id)arg1;

- (id)category;
- (void)dealloc;
- (id)description;
- (id)initWithString:(id)arg1 category:(id)arg2;
- (id)string;
- (id)surface;

@end
