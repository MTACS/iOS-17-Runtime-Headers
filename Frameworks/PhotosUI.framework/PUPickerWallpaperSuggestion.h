
@interface PUPickerWallpaperSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion> {
    void mode;
    void shouldReverseSortOrder;
}

@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) bool shouldReverseSortOrder;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mode;
- (bool)shouldReverseSortOrder;

@end
