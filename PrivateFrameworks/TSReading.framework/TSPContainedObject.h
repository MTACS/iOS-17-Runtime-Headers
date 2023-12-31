
@interface TSPContainedObject : NSObject {
    TSPObject * _owner;
}

@property (nonatomic) TSPObject *owner;

- (void).cxx_destruct;
- (id)documentRoot;
- (id)initWithOwner:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
