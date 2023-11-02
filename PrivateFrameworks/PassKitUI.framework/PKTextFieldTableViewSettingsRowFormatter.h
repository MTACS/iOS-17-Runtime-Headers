
@interface PKTextFieldTableViewSettingsRowFormatter : NSObject {
    NSSet * _formatPaddingCharacters;
}

@property (nonatomic, copy) NSSet *formatPaddingCharacters;

- (void).cxx_destruct;
- (id)formatPaddingCharacters;
- (id)formattedValueFromInput:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setFormatPaddingCharacters:(id)arg1;
- (id)submissionValueFromFormattedInput:(id)arg1;

@end
