
@interface _SBIconListRecordedObserverCallback : NSObject <BSDescriptionProviding> {
    NSArray * _addedIcons;
    NSArray * _movedIcons;
    NSArray * _removedIcons;
    SBIcon * _replacedIcon;
    SBIcon * _replacementIcon;
}

@property (nonatomic, copy) NSArray *addedIcons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *movedIcons;
@property (nonatomic, copy) NSArray *removedIcons;
@property (nonatomic, retain) SBIcon *replacedIcon;
@property (nonatomic, retain) SBIcon *replacementIcon;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addedIcons;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)movedIcons;
- (id)removedIcons;
- (id)replacedIcon;
- (id)replacementIcon;
- (void)setAddedIcons:(id)arg1;
- (void)setMovedIcons:(id)arg1;
- (void)setRemovedIcons:(id)arg1;
- (void)setReplacedIcon:(id)arg1;
- (void)setReplacementIcon:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
