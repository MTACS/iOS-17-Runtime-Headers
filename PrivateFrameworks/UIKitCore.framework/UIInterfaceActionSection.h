
@interface UIInterfaceActionSection : NSObject <NSCopying> {
    NSArray * _actions;
    NSString * _sectionID;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSString *sectionID;

+ (id)actionsFromSections:(id)arg1;

- (void).cxx_destruct;
- (id)actions;
- (id)copyOfActions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithActions:(id)arg1;
- (id)sectionID;

@end
