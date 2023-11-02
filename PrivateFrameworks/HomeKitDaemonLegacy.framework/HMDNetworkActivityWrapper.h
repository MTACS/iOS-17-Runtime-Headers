
@interface HMDNetworkActivityWrapper : NSObject {
    NSObject<OS_nw_activity> * _activity;
    bool  _completed;
    NSMutableSet * _mutableChildren;
    HMDNetworkActivityWrapper * _parent;
}

@property (nonatomic, readonly) NSObject<OS_nw_activity> *activity;
@property (nonatomic, readonly) NSSet *children;
@property (nonatomic) bool completed;
@property (nonatomic, readonly) bool isActivated;
@property (nonatomic, readonly) unsigned long long label;
@property (nonatomic, readonly) NSMutableSet *mutableChildren;
@property (nonatomic, readonly) HMDNetworkActivityWrapper *parent;

- (void).cxx_destruct;
- (void)activate;
- (id)activity;
- (id)childActivityWithLabel:(unsigned long long)arg1 createIfNeeded:(bool)arg2;
- (id)children;
- (void)completeWithSuccess:(bool)arg1;
- (bool)completed;
- (id)initWithLabel:(unsigned long long)arg1;
- (bool)isActivated;
- (unsigned long long)label;
- (id)mutableChildren;
- (id)parent;
- (void)setCompleted:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)submitMetrics:(id)arg1 withName:(id)arg2;

@end
