
@interface SiriHearstLongPressButtonContext : SiriLongPressButtonContext {
    bool  _isTemporaryDevice;
}

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechRequestOptions:(id)arg1;
- (bool)isTemporaryDevice;

@end
