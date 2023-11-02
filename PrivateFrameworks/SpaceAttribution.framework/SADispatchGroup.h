
@interface SADispatchGroup : NSObject {
    int  _entries;
    NSObject<OS_dispatch_group> * _group;
}

@property int entries;
@property (retain) NSObject<OS_dispatch_group> *group;

+ (id)new;

- (void).cxx_destruct;
- (void)enter;
- (int)entries;
- (id)group;
- (id)init;
- (void)leave;
- (void)setEntries:(int)arg1;
- (void)setGroup:(id)arg1;
- (int)wait:(unsigned long long)arg1;

@end
