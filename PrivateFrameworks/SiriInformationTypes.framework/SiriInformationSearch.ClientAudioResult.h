
@interface SiriInformationSearch.ClientAudioResult : SiriInformationSearch.PommesResult {
    void vocabularyResult;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
