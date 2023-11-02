
@interface REMSmartListSection : REMBaseSection {
    REMSmartList * _smartList;
}

@property (nonatomic, readonly) REMSmartList *smartList;
@property (nonatomic, retain) REMObjectID *smartListID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStore:(id)arg1 smartList:(id)arg2 storage:(id)arg3;
- (id)smartList;

@end
