
@interface PSIGroupCache : NSObject {
    <PSIGroupCacheDelegate> * _delegate;
    NSMutableSet * _groups;
    unsigned long long  _numberOfGroupsChecked;
    unsigned long long  _numberOfGroupsQueried;
}

@property (readonly) unsigned long long numberOfGroupsChecked;
@property (readonly) unsigned long long numberOfGroupsQueried;

- (void).cxx_destruct;
- (unsigned long long)idOfGroupWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)numberOfGroupsChecked;
- (unsigned long long)numberOfGroupsQueried;

@end
