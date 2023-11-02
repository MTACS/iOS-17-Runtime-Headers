
@interface WFContactGroup : NSObject <WFNaming>

@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)allContactGroups;
+ (id)contactGroupWithName:(id)arg1;
+ (Class)preferredConcreteSubclass;

- (id)contacts;
- (bool)containsContact:(id)arg1;
- (id)name;
- (id)wfName;

@end
