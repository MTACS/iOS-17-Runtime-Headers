
@interface HFPlaceholderTriggerBuilder : HFTriggerBuilder {
    bool  _isEditing;
}

@property (nonatomic) bool isEditing;

+ (id)createPlaceholderTriggerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 context:(id)arg3;

- (id)commitItem;
- (bool)isEditing;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (void)setIsEditing:(bool)arg1;

@end
