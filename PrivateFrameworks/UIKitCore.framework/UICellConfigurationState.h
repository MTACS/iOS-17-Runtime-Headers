
@interface UICellConfigurationState : UIViewConfigurationState <_UICellConfigurationStateReadonly> {
    struct { 
        unsigned int isEditing : 1; 
        unsigned int isExpanded : 1; 
        unsigned int isSwiped : 1; 
        unsigned int isReordering : 1; 
        unsigned int cellDragState : 2; 
        unsigned int cellDropState : 2; 
        unsigned int usesAnyPlainListStyle : 1; 
    }  _cellStateFlags;
}

@property (nonatomic, readonly) long long _contextMenuGroupLocation;
@property (setter=_setUsesAnyPlainListStyle:, nonatomic) bool _usesAnyPlainListStyle;
@property (nonatomic, readonly) unsigned long long _viewConfigurationState;
@property (nonatomic) long long cellDragState;
@property (nonatomic) long long cellDropState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (getter=isEditing, nonatomic) bool editing;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (getter=isFocused, nonatomic, readonly) bool focused;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic) bool isChild;
@property (nonatomic) bool isFocusSystemActive;
@property (nonatomic) bool isFocusingOnMessageListCell;
@property (nonatomic) bool isParent;
@property (getter=isPinned, nonatomic, readonly) bool pinned;
@property (getter=isReordering, nonatomic) bool reordering;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (readonly) Class superclass;
@property (getter=isSwiped, nonatomic) bool swiped;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)supportsSecureCoding;

- (void)_appendPropertiesForDescription:(id)arg1;
- (void)_configureWithViewConfigurationState:(unsigned long long)arg1;
- (id)_initWithState:(id)arg1;
- (void)_setUsesAnyPlainListStyle:(bool)arg1;
- (bool)_usesAnyPlainListStyle;
- (unsigned long long)_viewConfigurationState;
- (long long)cellDragState;
- (long long)cellDropState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEditing;
- (bool)isEqual:(id)arg1;
- (bool)isExpanded;
- (bool)isReordering;
- (bool)isSwiped;
- (void)setCellDragState:(long long)arg1;
- (void)setCellDropState:(long long)arg1;
- (void)setEditing:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setReordering:(bool)arg1;
- (void)setSwiped:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

- (bool)isChild;
- (bool)isFocusSystemActive;
- (bool)isFocusingOnMessageListCell;
- (bool)isParent;
- (void)setIsChild:(bool)arg1;
- (void)setIsFocusSystemActive:(bool)arg1;
- (void)setIsFocusingOnMessageListCell:(bool)arg1;
- (void)setIsParent:(bool)arg1;

@end
