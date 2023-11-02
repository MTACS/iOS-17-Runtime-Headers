
@interface PUPickerLivePhotoWithPossibleMotionEffectSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion> {
    void shouldReverseSortOrder;
}

@property (nonatomic, readonly) bool shouldReverseSortOrder;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)shouldReverseSortOrder;

@end
