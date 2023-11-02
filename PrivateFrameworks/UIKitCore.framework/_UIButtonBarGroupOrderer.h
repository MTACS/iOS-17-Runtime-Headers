
@interface _UIButtonBarGroupOrderer : NSObject {
    NSString * _customizationIdentifier;
    NSMutableSet * _excludedItems;
    NSMutableOrderedSet * _includedItems;
    NSArray * _orderedGroups;
    <_UIButtonBarGroupOrderOwner> * _owner;
}

- (void).cxx_destruct;
- (bool)_hasCustomization;
- (id)_initWithCustomizationIdentifier:(id)arg1 data:(id)arg2;
- (void)_orderGroups;

@end
