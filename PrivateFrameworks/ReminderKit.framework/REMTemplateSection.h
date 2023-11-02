
@interface REMTemplateSection : REMBaseSection {
    REMTemplate * _parentTemplate;
}

@property (nonatomic, readonly) REMTemplate *parentTemplate;
@property (nonatomic, retain) REMObjectID *parentTemplateID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStore:(id)arg1 parentTemplate:(id)arg2 storage:(id)arg3;
- (id)parentTemplate;

@end
