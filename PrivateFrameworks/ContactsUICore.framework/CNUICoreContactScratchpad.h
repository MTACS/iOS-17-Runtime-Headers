
@interface CNUICoreContactScratchpad : NSObject {
    NSSet * _edits;
}

@property (nonatomic, readonly) NSSet *allContacts;
@property (nonatomic, readonly) NSSet *edits;
@property (nonatomic, readonly) NSSet *modifiedContacts;

+ (id)editMatchingContact:(id)arg1 inEdits:(id)arg2;
+ (id)editsByReplacingEdit:(id)arg1 withUpdatedEdit:(id)arg2 inEdits:(id)arg3;
+ (id)emptyScratchpad;
+ (id)scratchpadByAddingUneditedContact:(id)arg1 toScratchpad:(id)arg2;
+ (id)scratchpadByRemovingModifiedContact:(id)arg1 fromScratchpad:(id)arg2;
+ (id)scratchpadBySettingModifiedContact:(id)arg1 onExistingEditInScratchpad:(id)arg2;

- (void).cxx_destruct;
- (id)allContacts;
- (bool)containsContact:(id)arg1;
- (id)description;
- (id)edits;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEdits:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modifiedContactForContact:(id)arg1;
- (id)modifiedContacts;
- (id)modifiedIfPresentOtherwiseOriginalContactForContact:(id)arg1;
- (id)scratchpadByAddingContacts:(id)arg1;
- (id)scratchpadByKeepingContacts:(id)arg1;
- (id)scratchpadByRemovingContacts:(id)arg1;

@end
