
@interface FAPickerSelection : NSObject {
    void isAddSelection;
    void selectedMember;
}

@property (nonatomic, readonly) bool isAddSelection;
@property (nonatomic, readonly) FAFamilyMember *selectedMember;

+ (id)addSelection;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSelectedMember:(id)arg1;
- (bool)isAddSelection;
- (id)selectedMember;

@end
