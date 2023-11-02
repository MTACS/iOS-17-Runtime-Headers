
@interface RemindersUICore.TTRReminderTextStorage : TTRReminderBaseTextStorage {
    void baseTextStyles;
    void committedHashtagTextStyles;
    void debug_highlightNonEditableTexts;
    void debug_nonEditableTextStyles;
    void foreignHashtagTextStyles;
    void harvestedResultTextStyles;
    void hashtagVisibility;
    void uncommittedHashtagTextStyles;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (void)processEditing;

@end
