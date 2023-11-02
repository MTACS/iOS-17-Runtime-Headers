
@interface WFContactTextAttachment : WFValueTextAttachment {
    WFContact * _value;
}

@property (nonatomic, retain) WFContact *value;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)setValue:(id)arg1;
- (id)value;
- (id)valueName;

@end
