
@interface SALocalSearchActionableMapItem : SALocalSearchMapItem

@property (nonatomic, copy) NSArray *commands;

+ (id)actionableMapItem;
+ (id)actionableMapItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCommands:(id)arg1;

@end
