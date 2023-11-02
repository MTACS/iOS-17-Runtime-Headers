
@interface HUHomeStatusDetailsItemAndPriorityTuple : NSObject {
    HFItem * _item;
    long long  _priority;
}

@property (nonatomic) HFItem *item;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 priority:(long long)arg2;
- (id)item;
- (long long)priority;
- (void)setItem:(id)arg1;
- (void)setPriority:(long long)arg1;

@end
