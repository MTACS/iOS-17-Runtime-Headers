
@interface HomeAutomationInternal.EventTriggerValue : TriggerValue {
    void event;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  offset;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  recurringDate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
