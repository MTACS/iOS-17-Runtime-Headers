
@interface AFBulletinAction : NSObject {
    BBAction * _bbAction;
    NSString * _bbActionID;
    NSMutableSet * _titleVariants;
}

@property (nonatomic, readonly) BBAction *bbAction;
@property (nonatomic, readonly, copy) NSString *bbActionID;
@property (nonatomic, retain) NSMutableSet *titleVariants;

- (void).cxx_destruct;
- (void)addTitleVariant:(id)arg1;
- (id)bbAction;
- (id)bbActionID;
- (id)getTitleVariants;
- (id)initWithBulletinAction:(id)arg1;
- (void)setTitleVariants:(id)arg1;
- (id)titleVariants;

@end
