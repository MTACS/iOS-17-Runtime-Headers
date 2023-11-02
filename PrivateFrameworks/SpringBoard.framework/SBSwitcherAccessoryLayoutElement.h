
@interface SBSwitcherAccessoryLayoutElement : NSObject <SBSwitcherLayoutElementProviding> {
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (id)initWithType:(unsigned long long)arg1;
- (unsigned long long)switcherLayoutElementType;
- (unsigned long long)type;

@end
